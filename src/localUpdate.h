//
// Created by viciu on 25.01.2020.
//

#ifndef NAMF_UPDATE_H
#define NAMF_UPDATE_H

#include "defines.h"
#include "variables.h"
#include "helpers.h"
#include "sensors/sds011/sds011.h"

#ifdef ARDUINO_ARCH_ESP32
#include <WiFi.h> /// FOR ESP32
#include <HTTPClient.h> /// FOR ESP32 HTTP FOTA UPDATE ///
#include <HTTPUpdate.h> /// FOR ESP32 HTTP FOTA UPDATE ///
#include <WiFiClient.h> /// FOR ESP32 HTTP FOTA UPDATE ///
WiFiClient client;  /// FOR ESP32 HTTP FOTA UPDATE ///

t_httpUpdate_return tryUpdate(const String host, const String port, const String path, const String ver) {
    t_httpUpdate_return ret = httpUpdate.update(client, UPDATE_HOST, UPDATE_PORT, UPDATE_URL, ver);
//no OTA for now
    return ret;
}
#else

#include <ESP8266WiFi.h>
#include <ESP8266httpUpdate.h>
#include "helpers.h"
t_httpUpdate_return tryUpdate(const String host, const String port, const String path, const String ver) {
    debug_out(F(">>>>> HOST: "), DEBUG_MIN_INFO,false); debug_out(host, DEBUG_MIN_INFO,true);
    debug_out(F(">>>>> PORT: "), DEBUG_MIN_INFO,false); debug_out(port, DEBUG_MIN_INFO,true);
    debug_out(F(">>>>> PATH: "), DEBUG_MIN_INFO,false); debug_out(path, DEBUG_MIN_INFO,true);

    WiFi.setSleepMode(WIFI_NONE_SLEEP);
    // 1. same/one pointer for both clients
    std::unique_ptr<WiFiClient> client;

    // 2. choose the right client depending on the port
    if (port == F("443")) {
        debug_out(F(">>>>> PORT: "), DEBUG_MIN_INFO,false); debug_out(port, DEBUG_MIN_INFO,true);
        auto httpsClient = new BearSSL::WiFiClientSecure();
        httpsClient->setInsecure();   // DEV only, at the production stage the certificate should be verified
        httpsClient->setBufferSizes(8192, 512);
        client.reset(httpsClient);
    } else {
        debug_out(F(">>>>> ELSE PORT: "), DEBUG_MIN_INFO,false); debug_out(port, DEBUG_MIN_INFO,true);
        client.reset(new WiFiClient());
    }

    Serial.println("Version: " + ver);
    client->setTimeout(90000); // 20 seconds -> ..
    ESPhttpUpdate.rebootOnUpdate(false); 
    // t_httpUpdate_return ret = ESPhttpUpdate.update(*client, host, port.toInt(), path, ver);
    
    debug_out(F("Free heap: "), DEBUG_MIN_INFO,false); debug_out(String(ESP.getFreeHeap()), DEBUG_MIN_INFO,true);
    HTTPClient http;
    http.begin(*client, host, port.toInt(), path, false);
    // http.setFollowRedirects(HTTPC_FORCE_FOLLOW_REDIRECTS);
    String firmwareUrl = String("http") + (true ? "s" : "") + "://" + host + ":" + String(port) + path;
    // Serial.printf("Sprawdzam URL: %s\n", firmwareUrl);
    debug_out(F("Sprawdzam URL: "), DEBUG_MIN_INFO,false); debug_out(firmwareUrl, DEBUG_MIN_INFO,true);

    t_httpUpdate_return ret;
    int httpCode = http.GET();

    debug_out(F("Kod HTTP: "), DEBUG_MIN_INFO,false); debug_out(String(httpCode), DEBUG_MIN_INFO,true);
    if (httpCode == HTTP_CODE_FOUND || httpCode == HTTP_CODE_MOVED_PERMANENTLY || httpCode == HTTP_CODE_SEE_OTHER) {
      // pobierz nagłówek Location
      String newUrl = http.getLocation();//("Location");
      debug_out(F("Redirect → "), DEBUG_MIN_INFO,false); debug_out(newUrl.c_str(), DEBUG_MIN_INFO,true);

      if (!client) {
        // Serial.println("Błąd: client NULL!");
        debug_out(F("Błąd: client NULL"), DEBUG_MIN_INFO, true);
      }
        if (newUrl.length() == 0) {
            debug_out(F("Błąd: pusty URL"), DEBUG_MIN_INFO, true);
        }
      // teraz robimy update z nowym URL
      ret = ESPhttpUpdate.update(*client, newUrl);

      switch (ret) {
        case HTTP_UPDATE_FAILED:
            debug_out(F("Update FAIL. Err : ("), DEBUG_MIN_INFO,false); debug_out(String(ESPhttpUpdate.getLastError()), DEBUG_MIN_INFO,false);
            debug_out(F("): "), DEBUG_MIN_INFO,false); debug_out(ESPhttpUpdate.getLastErrorString().c_str(), DEBUG_MIN_INFO,true);
          break;

        case HTTP_UPDATE_NO_UPDATES:
          debug_out(F("Brak aktualizacji."), DEBUG_MIN_INFO, true);
          break;

        case HTTP_UPDATE_OK:
          debug_out(F("Update OK, reboot!"), DEBUG_MIN_INFO, true);
          ESP.restart();
          break;
      }
    } else if (httpCode == HTTP_CODE_OK) {
        debug_out(F("URL daje 200 OK — można update bezpośrednio"), DEBUG_MIN_INFO, true);
      ret = ESPhttpUpdate.update(*client, firmwareUrl);
      // obsługa jak wyżej
    } else {
        debug_out(F("Nieoczekiwany kod HTTP: "), DEBUG_MIN_INFO,false); debug_out(String(httpCode), DEBUG_MIN_INFO,true);
    }
    http.end();
  


    // return handleUpdate(http, ver, false);
    // t_httpUpdate_return ret = ESPhttpUpdate.update(http, ver); // <<<<<
          // wyłącz auto-reboot
// auto ret = ESPhttpUpdate.update(client, url, currentVersion);
    debug_out(F("Update return code: "), DEBUG_MIN_INFO,false); debug_out(String(ret), DEBUG_MIN_INFO,true);
    debug_out(F("Last error: "), DEBUG_MIN_INFO,false); debug_out(String(ESPhttpUpdate.getLastError()), DEBUG_MIN_INFO,true);
    debug_out(F("Error msg: "), DEBUG_MIN_INFO,false); debug_out(ESPhttpUpdate.getLastErrorString().c_str(), DEBUG_MIN_INFO,true);
    debug_out(F(">>>>> UPDATE result: "), DEBUG_MIN_INFO,false); debug_out(String(ret), DEBUG_MIN_INFO,true);
    return ret;
};
#endif

t_httpUpdate_return tryUpdate(String const ver) {
    String host;
    String url;
    debug_out(F(">>>>> UPDATE CHANEL: "), DEBUG_MIN_INFO,false);
    debug_out(String(cfg::update_channel), DEBUG_MIN_INFO,true);
    switch(cfg::update_channel) {
        case UPDATE_CHANNEL_ALFA:
            host = String(UPDATE_HOST_ALFA);
            url = String(UPDATE_URL_ALFA);
            break;
        case UPDATE_CHANNEL_BETA:
            host = String(UPDATE_HOST_BETA);
            url = String(UPDATE_URL_BETA);
            break;
        default:
            host = String(UPDATE_HOST);
            url = String(UPDATE_URL);
            break;
    }
    debug_out(F("Update checked:"), DEBUG_MIN_INFO,true);
    debug_out(host, DEBUG_MIN_INFO,true);
    debug_out(url, DEBUG_MIN_INFO,true);
    return tryUpdate(host,String(UPDATE_PORT), url, ver);
};

void verifyUpdate (t_httpUpdate_return result) {
    last_update_attempt = millis();
    switch (result) {
        case HTTP_UPDATE_FAILED:
            display_debug(F("[update] Update failed."),"");
            Serial.println(F("[update] Update failed."));
            // debug_out(F("HTTP_UPDATE_FAILED"), DEBUG_MIN_INFO,true);
            break;
        case HTTP_UPDATE_NO_UPDATES:
            display_debug(F("[update] no Update."), String(SOFTWARE_VERSION));
            Serial.println(F("[update] no Update."));
            Serial.print(F("Still running version: "));
            Serial.println(SOFTWARE_VERSION);
            // debug_out(F("HTTP_UPDATE_NO_UPDATES"), DEBUG_MIN_INFO,true);
            break;
        case HTTP_UPDATE_OK:
            Serial.println(F("[update] Update ok.")); // may not called we reboot the ESP
            // debug_out(F("HTTP_UPDATE_OK"), DEBUG_MIN_INFO,true);
            break;
    }


}


String sds_report() {
    String ret = F("");
    if (SDS011::enabled || cfg::sds_read) {
        ret += String(SDS011::failedReadings) + String(F("-")) + String(SDS011::readings);
//        SDS011::failedReadings = SDS011::readings = 0;
    } else {
        ret += F("na-na");
    }
    return ret;
}



void updateFW(const String host, const String port, const String path) {
    debug_out(F("Check for update with "),DEBUG_MIN_INFO,1);
    display_debug(F("Update - check"), F(""));
    debug_out(host,DEBUG_MIN_INFO,1);
    debug_out(port,DEBUG_MIN_INFO,1);
    debug_out(path,DEBUG_MIN_INFO,1);
    Serial.println(SOFTWARE_VERSION);
    String sensorPM = F("");
    if (SDS011::enabled) { sensorPM = F("SDS");}
    else if (cfg::pms_read) {sensorPM = F("PMSx");}
    else if (SPS30::started) {sensorPM = F("SPS");}
    String ver = String(SOFTWARE_VERSION);
    ver.concat(String(F(" ")));
    ver.concat(esp_chipid());
    ver.concat(String(F(" ")));
    ver.concat(sensorPM);
    ver.concat(String(F(" ")));
    ver.concat(String(cfg::current_lang));
    ver.concat(String(F(" ")));
    ver.concat(String(FPSTR(INTL_LANG)));
    ver.concat(sds_report());
    t_httpUpdate_return ret = tryUpdate( host, port, path, ver);
    verifyUpdate(ret);
};

void updateFW() {
    Serial.print(F("Check for update with default URL"));
    Serial.println(SOFTWARE_VERSION);
    display_debug(F("Update - check"), F(""));

    t_httpUpdate_return ret = tryUpdate(
            String(SOFTWARE_VERSION) + String(" ") + esp_chipid() + String(" ") + "SDS" + String(" ") +
            String(cfg::current_lang) + String(" ") + String(FPSTR(INTL_LANG)) + String(" ") + sds_report());
    verifyUpdate(ret);
};

#endif //NAMF_UPDATE_H
