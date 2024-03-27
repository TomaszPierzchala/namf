
/*
*** THIS IS AUTOGENERATED FILE DO NOT EDIT IT ****

(c) Nettigo 2020

Language translation file for Nettigo Air Monitor 

For changes in translations do them in corresponding .lang file. File with translations has format:

KEY[SPACE]translation string

So entry in file:
INTL_DS18B20 Sensor DS18B20 ({t}) 
Will become 
const char INTL_DS18B20[] PROGMEM = "Sensor DS18B20 ({t})";
in this file.

Generator will add path to source from which given line was generated. Generator is run by Platformio during build process.
Files with .lang extension are searched in following directories and it's subdirectories:

./src/lang/
./src/sensors/
./src/system/
*/ 


#ifndef LANG_DEF_hu_H
#define LANG_DEF_hu_H

/* ./src/lang/intl_hu.lang */ const char INTL_ALTITUDE[] PROGMEM = "Tengerszint feletti magasság";
/* ./src/sensors/bh1750/bh1750_hu.lang */ const char INTL_AMBIENT_LIGHT[] PROGMEM = "Környezetifény-érzékelő";
/* ./src/lang/intl_hu.lang */ const char INTL_AUTO_UPDATE[] PROGMEM = "Firmware automatikus frissítése";
/* ./src/lang/intl_hu.lang */ const char INTL_BACK_TO_HOME[] PROGMEM = "Vissza a főoldalra";
/* ./src/lang/intl_hu.lang */ const char INTL_BASICAUTH[] PROGMEM = "Azonosítás";
/* ./src/sensors/bh1750/bh1750_hu.lang */ const char INTL_BH1750_DESC[] PROGMEM = "Fényintenzitás-érzékelő (BH1750FVI)";
/* ./src/lang/intl_hu.lang */ const char INTL_BME280[] PROGMEM = "BME280 ({t}, {h}, {p})";
/* ./src/sensors/bme280/bme280_hu.lang */ const char INTL_BME280_DESC[] PROGMEM = "BME280 páratartalom/hőmérséklet/nyomás érzékelő";
/* ./src/lang/intl_hu.lang */ const char INTL_BMP280[] PROGMEM = "BMP280/BMP180 ({t}, {p})";
/* ./src/sensors/bmpX80/bmpX80_hu.lang */ const char INTL_BMPx80_DESC[] PROGMEM = "BMP180/280 hőmérséklet/nyomás érzékelő";
/* ./src/sensors/bmpX80/bmpX80_hu.lang */ const char INTL_BMPx80_INSIDE[] PROGMEM = "Érzékelő a házon belül (ne használjon hőmérséklet-leolvasást)";
/* ./src/lang/intl_hu.lang */ const char INTL_CANCEL[] PROGMEM = "Mégse";
/* ./src/lang/intl_hu.lang */ const char INTL_CONFIGURATION[] PROGMEM = "Konfiguráció";
/* ./src/lang/intl_hu.lang */ const char INTL_CONFIGURATION_DELETE[] PROGMEM = "Beállítások törlése";
/* ./src/lang/intl_hu.lang */ const char INTL_CONFIGURATION_REALLY_DELETE[] PROGMEM = "Biztosan törölni akarod a beállításokat?";
/* ./src/lang/intl_hu.lang */ const char INTL_CONFIG_CAN_NOT_BE_DELETED[] PROGMEM = "A beállítások törlése sikertelen.";
/* ./src/lang/intl_hu.lang */ const char INTL_CONFIG_DELETED[] PROGMEM = "Beállítások törölve";
/* ./src/lang/intl_hu.lang */ const char INTL_CONFIG_NOT_FOUND[] PROGMEM = "Beállítások nem találhatóak";
/* ./src/lang/intl_hu.lang */ const char INTL_CONFIG_SAVED[] PROGMEM = "A konfiguráció mentve";
/* ./src/lang/intl_hu.lang */ const char INTL_CURRENT_DATA[] PROGMEM = "Aktuális adatok";
/* ./src/lang/intl_hu.lang */ const char INTL_DATE[] PROGMEM = "Dátum";
/* ./src/lang/intl_hu.lang */ const char INTL_DEBUG_LEVEL[] PROGMEM = "Debug&nbsp;Level";
/* ./src/lang/intl_hu.lang */ const char INTL_DEBUG_SETTING_TO[] PROGMEM = "Debug beállítás";
/* ./src/lang/intl_hu.lang */ const char INTL_DELETE[] PROGMEM = "Törlés";
/* ./src/lang/intl_hu.lang */ const char INTL_DELETE_CONFIG[] PROGMEM = "A mentett beállítások törlése";
/* ./src/lang/intl_hu.lang */ const char INTL_DHT22[] PROGMEM = "DHT22 ({t}, {h})";
/* ./src/lang/intl_hu.lang */ const char INTL_DIAGNOSTIC[] PROGMEM = "Diagnosztikai adatok küldése a Nettigo -nak";
/* ./src/lang/intl_hu.lang */ const char INTL_DISPLAY[] PROGMEM = "OLED SSD1306";
/* ./src/lang/intl_hu.lang */ const char INTL_DS18B20[] PROGMEM = "DS18B20 ({t})";
/* ./src/lang/intl_hu.lang */ const char INTL_DURATION_ROUTER_MODE[] PROGMEM = "Hotspot mód időtartama";
/* ./src/lang/intl_hu.lang */ const char INTL_ENABLE_OTA[] PROGMEM = "Enable OTA";
/* ./src/lang/intl_hu.lang */ const char INTL_ENABLE_OTA_INFO[] PROGMEM = "OTA enabled for 60 seconds.";
/* ./src/lang/intl_hu.lang */ const char INTL_ENABLE_OTA_REFUSE[] PROGMEM = "Enable authorization in config panel in order to allow code upload";
/* ./src/lang/intl_hu.lang */ const char INTL_ERROR[] PROGMEM = "only errors";
/* ./src/lang/intl_hu.lang */ const char INTL_FALBACK_WIFI[] PROGMEM = "Alternatív WiFi hálózat";
/* ./src/lang/intl_hu.lang */ const char INTL_FIRMWARE[] PROGMEM = "Firmware verzió";
/* ./src/lang/intl_hu.lang */ const char INTL_FS_WIFI[] PROGMEM = "WiFi Szenzor";
/* ./src/lang/intl_hu.lang */ const char INTL_FS_WIFI_DESCRIPTION[] PROGMEM = "WiFi Szenzor konfigurációs módban";
/* ./src/lang/intl_hu.lang */ const char INTL_FS_WIFI_NAME[] PROGMEM = "Név";
/* ./src/lang/intl_hu.lang */ const char INTL_HECA[] PROGMEM = "HECA (SHT30) ({t}, {h})";
/* ./src/sensors/heca/heca_hu.lang */ const char INTL_HECA_DESC[] PROGMEM = "";
/* ./src/lang/intl_hu.lang */ const char INTL_HOME[] PROGMEM = "Főoldal";
/* ./src/lang/intl_hu.lang */ const char INTL_HUMIDITY[] PROGMEM = "relatív páratartalom";
/* ./src/lang/intl_hu.lang */ const char INTL_LANG[] PROGMEM = "HU";
/* ./src/lang/intl_hu.lang */ const char INTL_LANGUAGE[] PROGMEM = "Nyelv";
/* ./src/lang/intl_hu.lang */ const char INTL_LATITUDE[] PROGMEM = "Földrajzi szélesség";
/* ./src/lang/intl_hu.lang */ const char INTL_LCD[] PROGMEM = "Karakter megjelenítés:";
/* ./src/lang/intl_hu.lang */ const char INTL_LCD1602[] PROGMEM = "LCD 2x16";
/* ./src/lang/intl_hu.lang */ const char INTL_LCD2004[] PROGMEM = "LCD 4x20";
/* ./src/lang/intl_hu.lang */ const char INTL_LCD_NONE[] PROGMEM = "Hiánya";
/* ./src/lang/intl_hu.lang */ const char INTL_LEDBAR_32[] PROGMEM = "RGB LED BAR (I2C: 0x32)";
/* ./src/lang/intl_hu.lang */ const char INTL_LONGITUDE[] PROGMEM = "Földrajzi hosszúság";
/* ./src/lang/intl_hu.lang */ const char INTL_MAX_INFO[] PROGMEM = "max. info";
/* ./src/lang/intl_hu.lang */ const char INTL_MEASUREMENT_INTERVAL[] PROGMEM = "Mérési intervallum";
/* ./src/lang/intl_hu.lang */ const char INTL_MED_INFO[] PROGMEM = "mid. info";
/* ./src/sensors/mhz14a/mhz14a_hu.lang */ const char INTL_MHZ14A[] PROGMEM = "Winsen MH-Z14A CO2 Sensor";
/* ./src/sensors/mhz14a/mhz14a_hu.lang */ const char INTL_MHZ14A_DESC[] PROGMEM = "Winsen MHZ14A - CO2 sensor";
/* ./src/sensors/mhz14a/mhz14a_hu.lang */ const char INTL_MHZ14A_VAL[] PROGMEM = "WINSEN";
/* ./src/lang/intl_hu.lang */ const char INTL_MIN_INFO[] PROGMEM = "min. info";
/* ./src/lang/intl_hu.lang */ const char INTL_MORE_APIS[] PROGMEM = "További API-k";
/* ./src/lang/intl_hu.lang */ const char INTL_MORE_SETTINGS[] PROGMEM = "További beállítások";
/* ./src/lang/intl_hu.lang */ const char INTL_NEO6M[] PROGMEM = "GPS (NEO 6M)";
/* ./src/lang/intl_hu.lang */ const char INTL_NETWORKS_FOUND[] PROGMEM = "Talált WiFi hálózatok:";
/* ./src/lang/intl_hu.lang */ const char INTL_NONE[] PROGMEM = "off";
/* ./src/lang/intl_hu.lang */ const char INTL_NUMBER_OF_MEASUREMENTS[] PROGMEM = "Mérések száma:";
/* ./src/lang/intl_hu.lang */ const char INTL_PARAMETER[] PROGMEM = "Paraméter";
/* ./src/lang/intl_hu.lang */ const char INTL_PARTICLES_PER_LITER[] PROGMEM = "részecske/liter";
/* ./src/lang/intl_hu.lang */ const char INTL_PARTICULATE_MATTER[] PROGMEM = "szálló por";
/* ./src/lang/intl_hu.lang */ const char INTL_PASSWORD[] PROGMEM = "Jelszó";
/* ./src/lang/intl_hu.lang */ const char INTL_PATH[] PROGMEM = "Útvonal";
/* ./src/lang/intl_hu.lang */ const char INTL_PMS[] PROGMEM = "Plantower PMS(1,3,5,6,7)003 ({pm})";
/* ./src/lang/intl_hu.lang */ const char INTL_PM_SENSOR[] PROGMEM = "Szálló por szenzor";
/* ./src/lang/intl_hu.lang */ const char INTL_PORT[] PROGMEM = "Port";
/* ./src/lang/intl_hu.lang */ const char INTL_PRESSURE[] PROGMEM = "légnyomás";
/* ./src/lang/intl_hu.lang */ const char INTL_READ_FROM[] PROGMEM = "Read from {v}";
/* ./src/lang/intl_hu.lang */ const char INTL_REALLY_RESTART_SENSOR[] PROGMEM = "Biztosan újraindítod a szenzort?";
/* ./src/lang/intl_hu.lang */ const char INTL_RESTART[] PROGMEM = "Újraindítás";
/* ./src/lang/intl_hu.lang */ const char INTL_RESTART_DEVICE[] PROGMEM = "Eszköz újraindítása";
/* ./src/lang/intl_hu.lang */ const char INTL_RESTART_SENSOR[] PROGMEM = "A szenzor újraindítása";
/* ./src/lang/intl_hu.lang */ const char INTL_SAVE[] PROGMEM = "Mentés";
/* ./src/lang/intl_hu.lang */ const char INTL_SAVE_AND_RESTART[] PROGMEM = "Mentés és újraindítás";
/* ./src/lang/intl_hu.lang */ const char INTL_SDS011[] PROGMEM = "SDS011 ({pm})";
/* ./src/sensors/sds011/sds011_hu.lang */ const char INTL_SDS011_DESC[] PROGMEM = "SDS011 - PM2.5/PM10 sensor";
/* ./src/sensors/sds011/sds011_hu.lang */ const char INTL_SDS011_FAILED_READINGS[] PROGMEM = "Readings failed/total (counter reset with update check)";
/* ./src/sensors/sds011/sds011_hu.lang */ const char INTL_SDS011_HWR[] PROGMEM = "Hardver újraindító az SDS011-hez";
/* ./src/sensors/sds011/sds011_hu.lang */ const char INTL_SDS011_LCD_HDR[] PROGMEM = "SDS011 readings:";
/* ./src/sensors/sds011/sds011_hu.lang */ const char INTL_SDS011_READTIME[] PROGMEM = "Measurement time (ms)";
/* ./src/sensors/sds011/sds011_hu.lang */ const char INTL_SDS011_WARMUP[] PROGMEM = "Warmup time before measurement (ms)";
/* ./src/lang/intl_hu.lang */ const char INTL_SEND_TO[] PROGMEM = "Send to {v}";
/* ./src/lang/intl_hu.lang */ const char INTL_SEND_TO_OWN_API[] PROGMEM = "Adatok küldése saját API-nak";
/* ./src/lang/intl_hu.lang */ const char INTL_SENSOR[] PROGMEM = "Szenzor";
/* ./src/lang/intl_hu.lang */ const char INTL_SENSORS[] PROGMEM = "Szenzorok";
/* ./src/lang/intl_hu.lang */ const char INTL_SENSOR_IS_REBOOTING[] PROGMEM = "A Szenzor újraindul...";
/* ./src/lang/intl_hu.lang */ const char INTL_SERVER[] PROGMEM = "Szerver";
/* ./src/lang/intl_hu.lang */ const char INTL_SHOW_DEVICE_INFO[] PROGMEM = "Az eszköz adatainak megjelenítése az LCD-n";
/* ./src/lang/intl_hu.lang */ const char INTL_SHOW_WIFI_INFO[] PROGMEM = "A Wi-Fi kapcsolat adatainak megjelenítése az LCD-n";
/* ./src/sensors/sht3x/sht3x_hu.lang */ const char INTL_SHT3X_DESC[] PROGMEM = "SHT3x - temperature and humidity sensor";
/* ./src/sensors/sht3x/sht3x_hu.lang */ const char INTL_SHT3X_RESULTS[] PROGMEM = "Humidity and temperature";
/* ./src/sensors/sht3x/sht3x_hu.lang */ const char INTL_SHT3x_HUM[] PROGMEM = "Relative humidity";
/* ./src/sensors/sht3x/sht3x_hu.lang */ const char INTL_SHT3x_TEMP[] PROGMEM = "Temperature";
/* ./src/lang/intl_hu.lang */ const char INTL_SIGNAL_QUALITY[] PROGMEM = "Jelminőség";
/* ./src/lang/intl_hu.lang */ const char INTL_SIGNAL_STRENGTH[] PROGMEM = "Jelerősség";
/* ./src/lang/intl_hu.lang */ const char INTL_TEMPERATURE[] PROGMEM = "hőmérséklet";
/* ./src/lang/intl_hu.lang */ const char INTL_TIME[] PROGMEM = "Idő";
/* ./src/lang/intl_hu.lang */ const char INTL_TIME_SINCE_LAST_MEASUREMENT[] PROGMEM = " másodperc telt el az utolsó mérés óta.";
/* ./src/lang/intl_hu.lang */ const char INTL_TIME_TO_MEASUREMENT[] PROGMEM = "Még {v} másodperc van hátra az mérésig";
/* ./src/lang/intl_hu.lang */ const char INTL_USER[] PROGMEM = "Felhasználónév";
/* ./src/lang/intl_hu.lang */ const char INTL_VALUE[] PROGMEM = "Érték";
/* ./src/lang/intl_hu.lang */ const char INTL_WARNING[] PROGMEM = "warnings";
/* ./src/lang/intl_hu.lang */ const char INTL_WIFI_NETWORKS[] PROGMEM = "WiFi hálózatok keresése...";
/* ./src/lang/intl_hu.lang */ const char INTL_WIFI_PHY_MODE[] PROGMEM = "WiFi Phy Mode (1=B / 2=G / 3=N)";
/* ./src/lang/intl_hu.lang */ const char INTL_WIFI_SETTINGS[] PROGMEM = "WiFi beállítások";
/* ./src/lang/intl_hu.lang */ const char INTL_WIFI_TX_PWR[] PROGMEM = "TX power 0-20.5(dBm)";
/* ./src/lang/intl_hu.lang */ const char LUFTDATEN_INFO_LOGO_SVG[] PROGMEM = "<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"120px\" height=\"90px\" version=\"1.0\" style=\"shape-rendering:geometricPrecision; text-rendering:geometricPrecision; image-rendering:optimizeQuality; fill-rule:evenodd; clip-rule:evenodd\" viewBox=\"0 0 120 90\" xmlns:xlink=\"http://www.w3.org/1999/xlink\"><g id=\"NAM Logo\"><path fill=\"#fff\" d=\"M50 27c0,1 -1,2 -2,2 -1,0 -2,-1 -2,-2 0,-8 6,-14 14,-14 7,0 13,6 13,14 0,7 -6,13 -13,13l-32 0c-12,0 -21,10 -21,21 0,14 13,23 26,20 2,-1 3,-1 5,-2 1,-1 2,0 3,1 1,1 0,2 -1,3 -10,6 -22,4 -30,-4 -10,-10 -10,-26 0,-36 4,-4 11,-7 18,-7l32 0c8,0 12,-10 6,-16 -6,-6 -16,-1 -16,7zm5 52c0,0 -1,0 -1,0l0 0 -1 -2 -3 0c0,1 0,2 0,2 -1,0 -1,0 -2,0 0,0 0,0 0,0l3 -8c0,0 0,0 0,0l0 0c1,0 2,0 2,0l3 8c0,0 0,0 -1,0l0 0zm6 -13c0,0 0,-8 0,-10 0,-2 1,-2 1,-2l6 0 0 2 -4 0 0 3 4 0 0 2 -4 0 0 3 4 0 0 2 -7 0zm11 0l0 -10 -4 0c0,0 0,-2 2,-2l17 0 0 2 -3 0 0 10 -3 0 0 -10c-2,0 -4,0 -6,0l0 10 -3 0zm16 0c0,0 0,-8 0,-10 0,-2 3,-2 3,-2l0 12 -3 0zm22 -12c2,0 3,0 5,1 1,2 2,3 2,5 0,2 -1,4 -2,5 -2,1 -3,2 -5,2 -1,0 -3,-1 -4,-2 -2,-1 -2,-3 -2,-5 0,-2 0,-3 2,-5 1,-1 3,-1 4,-1zm0 2c-1,0 -1,0 -2,1 -1,1 -1,2 -1,3 0,2 0,3 1,3 0,1 1,2 2,2 1,0 2,-1 3,-2 0,-1 1,-2 1,-3 0,-1 -1,-2 -1,-3 -1,-1 -2,-1 -3,-1zm-62 10c0,0 0,-8 0,-10 0,-2 2,-2 2,-2l7 8c0,0 0,-4 0,-6 0,-2 2,-2 2,-2l0 12 -2 0 -7 -8 0 6 0 2 -2 0 0 0zm55 -6c0,0 -3,0 -3,0 -2,0 -2,2 -2,2l3 0c0,2 0,2 0,2 -1,0 -1,1 -2,1 -1,0 -2,-1 -3,-2 -1,0 -1,-2 -1,-3 0,-1 0,-2 1,-3 1,-1 2,-1 3,-1 1,0 2,0 3,0l1 -1c-2,-1 -3,-1 -4,-1 -1,0 -2,0 -3,0 -1,1 -2,1 -3,2 -1,1 -1,3 -1,4 0,1 0,2 0,3 1,1 1,2 2,2 2,1 3,2 5,2 1,0 3,-1 4,-1l0 -6 0 0zm-52 16l2 0 -1 -2 -1 2zm6 3c0,0 -1,0 -1,0l0 -8c0,0 1,0 1,0 1,0 1,0 1,0l0 8c0,0 0,0 -1,0zm4 -3l0 3c0,0 -1,0 -1,0 -1,0 -1,0 -1,0l0 -8c0,0 0,0 1,0 1,0 2,0 3,0 1,0 1,1 2,1l0 0c0,2 0,3 -2,4l2 3c1,0 0,0 0,0l0 0c-1,0 -1,0 -2,0l-2 -3 0 0zm0 -1c1,0 2,0 2,-1 0,-1 -1,-1 -2,-1l0 2zm11 1l3 -5c0,0 0,0 0,0l0 0c0,0 0,0 0,0l0 0 1 0c0,0 0,0 0,0l0 8c0,0 0,0 -1,0 0,0 0,0 0,0l0 -4 -2 3c0,0 -1,0 -2,0l-1 -3 0 4c0,0 -1,0 -2,0 0,0 0,0 0,0l0 -8c0,0 0,0 1,0 0,0 1,0 1,0l2 5zm13 -1c0,6 -8,6 -8,0 0,-6 8,-6 8,0zm-2 0c0,-1 0,-1 0,-2l0 0c-1,-1 -2,-1 -3,0l0 0c-2,1 -1,5 2,5 1,-1 1,-2 1,-3zm4 -4c0,0 0,0 0,0l4 5 0 -5c0,0 1,0 1,0 0,0 1,0 1,0l0 8c0,1 -1,0 -2,0l0 0 0 0 -3 -5 0 5c0,0 -1,0 -2,0 0,0 0,0 0,0l0 -8c0,0 0,0 1,0zm8 8c0,0 -1,0 -1,0l0 -8c0,0 1,0 1,0 1,0 1,0 1,0l0 8c0,0 0,0 -1,0zm8 -8c0,2 0,2 -3,2l0 6c0,0 0,0 -1,0 0,0 -1,0 -1,0l0 -6c-2,0 -2,0 -2,-2 0,0 0,0 1,0l5 0c1,0 1,0 1,0zm7 4c0,6 -8,6 -8,0 0,-6 8,-6 8,0zm-2 0c0,-1 0,-1 0,-2l0 0c-1,-1 -2,-1 -3,0l0 0c-2,1 -1,5 2,5 1,-1 1,-2 1,-3zm5 1l0 3c0,0 -1,0 -2,0 0,0 0,0 0,0l0 -8c0,0 0,0 0,0 1,0 3,0 4,0 2,1 2,4 0,5l2 3c1,0 0,0 0,0l0 0c-1,0 -1,0 -2,0l-2 -3 0 0zm0 -1c1,0 2,0 2,-1 0,-1 -1,-1 -2,-1l0 2zm-85 -18c-3,0 -6,2 -7,4 1,2 4,4 7,4 3,0 5,-2 7,-4 -2,-2 -4,-4 -7,-4zm0 2c1,0 2,1 2,2 0,1 -1,2 -2,2 -2,0 -3,-1 -3,-2 0,-1 1,-2 3,-2zm22 -48c-1,0 -2,0 -3,-1 0,-1 0,-2 1,-3 9,-5 20,-4 28,4 9,8 9,23 0,32 -4,4 -10,7 -16,7l-32 0c-7,0 -12,5 -12,11 0,6 5,11 12,11 7,0 13,-7 11,-14 -1,-1 0,-2 1,-3 2,0 3,1 3,2 3,10 -5,20 -15,20 -9,0 -16,-7 -16,-16 0,-9 7,-16 16,-16l32 0c10,0 18,-8 18,-18 0,-12 -12,-21 -23,-18 -2,0 -3,1 -5,2z\"/></g></svg>";
/* ./src/sensors/sht3x/sht3x_hu.lang */ const char SENSOR_SHT3[] PROGMEM = "SHT3x";
 const char INTL_NTW_WTD_DESC[] PROGMEM = "Translate HU: INTL_NTW_WTD_DESC 🐱;";
 const char INTL_NTW_WTD_HOST[] PROGMEM = "Translate HU: INTL_NTW_WTD_HOST 🐱;";
 const char INTL_NTW_WTD_ERROR[] PROGMEM = "Translate HU: INTL_NTW_WTD_ERROR 🐱;";
 const char INTL_HECA_DC[] PROGMEM = "Translate HU: INTL_HECA_DC 🐱;";
 const char INTL_HECA_SET_RH[] PROGMEM = "Translate HU: INTL_HECA_SET_RH 🐱;";
 const char INTL_HECA_CLEAR_RH[] PROGMEM = "Translate HU: INTL_HECA_CLEAR_RH 🐱;";
 const char INTL_SPS30_FW_FAIL[] PROGMEM = "Translate HU: INTL_SPS30_FW_FAIL 🐱;";
 const char INTL_SPS30_CONCENTRATION[] PROGMEM = "Translate HU: INTL_SPS30_CONCENTRATION 🐱;";
 const char INTL_SPS30_SIZE[] PROGMEM = "Translate HU: INTL_SPS30_SIZE 🐱;";
 const char INTL_SPS30_NO_RESULT[] PROGMEM = "Translate HU: INTL_SPS30_NO_RESULT 🐱;";
 const char INTL_SPS30_CONCENTRATIONS[] PROGMEM = "Translate HU: INTL_SPS30_CONCENTRATIONS 🐱;";
 const char INTL_SPS30_COUNTS[] PROGMEM = "Translate HU: INTL_SPS30_COUNTS 🐱;";
 const char INTL_SPS30_SENSOR_DESC[] PROGMEM = "Translate HU: INTL_SPS30_SENSOR_DESC 🐱;";
 const char INTL_SPS30_REFRESH[] PROGMEM = "Translate HU: INTL_SPS30_REFRESH 🐱;";
 const char INTL_SPS30_NOT_STARTED[] PROGMEM = "Translate HU: INTL_SPS30_NOT_STARTED 🐱;";
 const char INTL_AMBIENT_LIGHT_MAX[] PROGMEM = "Translate HU: INTL_AMBIENT_LIGHT_MAX 🐱;";
 const char INTL_AMBIENT_LIGHT_MIN[] PROGMEM = "Translate HU: INTL_AMBIENT_LIGHT_MIN 🐱;";
 const char INTL_ADVANCED_BUTTON[] PROGMEM = "Translate HU: INTL_ADVANCED_BUTTON 🐱;";
 const char INTL_ADVANCED_DISCL[] PROGMEM = "Translate HU: INTL_ADVANCED_DISCL 🐱;";
 const char INTL_DEBUG_STATUS[] PROGMEM = "Translate HU: INTL_DEBUG_STATUS 🐱;";
 const char INTL_DEBUG[] PROGMEM = "Translate HU: INTL_DEBUG 🐱;";
 const char INTL_AQI_TOKEN[] PROGMEM = "Translate HU: INTL_AQI_TOKEN 🐱;";
 const char INTL_AQI_ECO_API[] PROGMEM = "Translate HU: INTL_AQI_ECO_API 🐱;";
 const char INTL_USE_HTTPS[] PROGMEM = "Translate HU: INTL_USE_HTTPS 🐱;";
 const char INTL_ENABLE[] PROGMEM = "Translate HU: INTL_ENABLE 🐱;";
 const char INTL_OTHER_APIS[] PROGMEM = "Translate HU: INTL_OTHER_APIS 🐱;";
 const char INTL_TAB_BASIC[] PROGMEM = "Translate HU: INTL_TAB_BASIC 🐱;";
 const char INTL_TAB_API[] PROGMEM = "Translate HU: INTL_TAB_API 🐱;";
 const char INTL_TAB_SENSORS[] PROGMEM = "Translate HU: INTL_TAB_SENSORS 🐱;";
 const char INTL_TAB_ADVANCED[] PROGMEM = "Translate HU: INTL_TAB_ADVANCED 🐱;";
 const char INTL_MADAVI_LINK[] PROGMEM = "Translate HU: INTL_MADAVI_LINK 🐱;";
 const char INTL_TIME_FROM_UPDATE[] PROGMEM = "Translate HU: INTL_TIME_FROM_UPDATE 🐱;";
 const char INTL_NTP_TIME[] PROGMEM = "Translate HU: INTL_NTP_TIME 🐱;";
 const char INTL_NTP_TIME_NOT_ACC[] PROGMEM = "Translate HU: INTL_NTP_TIME_NOT_ACC 🐱;";
 const char INTL_I2C_BUS[] PROGMEM = "Translate HU: INTL_I2C_BUS 🐱;";
 const char INTL_STATUS_PAGE[] PROGMEM = "Translate HU: INTL_STATUS_PAGE 🐱;";
 const char INTL_UPDATE_ALFA[] PROGMEM = "Translate HU: INTL_UPDATE_ALFA 🐱;";
 const char INTL_UPDATE_BETA[] PROGMEM = "Translate HU: INTL_UPDATE_BETA 🐱;";
 const char INTL_UPDATE_STABLE[] PROGMEM = "Translate HU: INTL_UPDATE_STABLE 🐱;";
 const char INTL_NO_NETWORKS[] PROGMEM = "Translate HU: INTL_NO_NETWORKS 🐱;";
 const char INTL_SENSOR_IS_REBOOTING_NOW[] PROGMEM = "Translate HU: INTL_SENSOR_IS_REBOOTING_NOW 🐱;";
 const char INTL_DISPLAY_NEW[] PROGMEM = "Translate HU: INTL_DISPLAY_NEW 🐱;";


#endif
