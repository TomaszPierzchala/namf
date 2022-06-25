
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


#ifndef LANG_DEF_ro_H
#define LANG_DEF_ro_H

/* ./src/lang/intl_ro.lang */ const char INTL_ALTITUDE[] PROGMEM = "Altitudine";
/* ./src/lang/intl_ro.lang */ const char INTL_AUTO_UPDATE[] PROGMEM = "Actualizarea automată a firmware-ului, utilizând canalul";
/* ./src/lang/intl_ro.lang */ const char INTL_BACK_TO_HOME[] PROGMEM = "Înapoi la pagina principală";
/* ./src/lang/intl_ro.lang */ const char INTL_BASICAUTH[] PROGMEM = "Autorizare";
/* ./src/lang/intl_ro.lang */ const char INTL_BME280[] PROGMEM = "BME280 ({t}, {h}, {p})";
/* ./src/sensors/bme280/bme280_ro.lang */ const char INTL_BME280_DESC[] PROGMEM = "Senzor de umiditate/temperatură/presiune BME280";
/* ./src/lang/intl_ro.lang */ const char INTL_BMP280[] PROGMEM = "BMP280/BMP180 ({t}, {p})";
/* ./src/sensors/bmpX80/bmpX80_ro.lang */ const char INTL_BMPx80_DESC[] PROGMEM = "Senzor de umiditate/temperatură BMP180/280";
/* ./src/sensors/bmpX80/bmpX80_ro.lang */ const char INTL_BMPx80_INSIDE[] PROGMEM = "Senzor în interiorul carcasei (nu utilizați citirea temperaturii)";
/* ./src/lang/intl_ro.lang */ const char INTL_CANCEL[] PROGMEM = "Anulează";
/* ./src/lang/intl_ro.lang */ const char INTL_CONFIGURATION[] PROGMEM = "Configurație";
/* ./src/lang/intl_ro.lang */ const char INTL_CONFIGURATION_DELETE[] PROGMEM = "Ștergerea configurației";
/* ./src/lang/intl_ro.lang */ const char INTL_CONFIGURATION_REALLY_DELETE[] PROGMEM = "Sunteți sigur că doriți să ștergeți configurația?";
/* ./src/lang/intl_ro.lang */ const char INTL_CONFIG_CAN_NOT_BE_DELETED[] PROGMEM = "Configurația nu poate fi ștearsă";
/* ./src/lang/intl_ro.lang */ const char INTL_CONFIG_DELETED[] PROGMEM = "Configurația este ștearsă";
/* ./src/lang/intl_ro.lang */ const char INTL_CONFIG_NOT_FOUND[] PROGMEM = "Configurația nu a fost găsită";
/* ./src/lang/intl_ro.lang */ const char INTL_CURRENT_DATA[] PROGMEM = "Date curente";
/* ./src/lang/intl_ro.lang */ const char INTL_DATE[] PROGMEM = "Data";
/* ./src/lang/intl_ro.lang */ const char INTL_DEBUG_LEVEL[] PROGMEM = "Depanare&nbsp;Nivel";
/* ./src/lang/intl_ro.lang */ const char INTL_DEBUG_SETTING_TO[] PROGMEM = "Setarea Debug la";
/* ./src/lang/intl_ro.lang */ const char INTL_DELETE[] PROGMEM = "Ștergeți";
/* ./src/lang/intl_ro.lang */ const char INTL_DELETE_CONFIG[] PROGMEM = "șterge configurația salvată";
/* ./src/lang/intl_ro.lang */ const char INTL_DHT22[] PROGMEM = "DHT22 ({t}, {h})";
/* ./src/lang/intl_ro.lang */ const char INTL_DIAGNOSTIC[] PROGMEM = "Trimiteți datele de diagnosticare către Nettigo";
/* ./src/lang/intl_ro.lang */ const char INTL_DISPLAY[] PROGMEM = "OLED SSD1306";
/* ./src/system/system_ro.lang */ const char INTL_DISPLAY_NEW[] PROGMEM = "Afișare pe LCD";
/* ./src/lang/intl_ro.lang */ const char INTL_DS18B20[] PROGMEM = "DS18B20 ({t})";
/* ./src/lang/intl_ro.lang */ const char INTL_DURATION_ROUTER_MODE[] PROGMEM = "Durata modului router";
/* ./src/system/system_ro.lang */ const char INTL_ENABLE[] PROGMEM = "Activați";
/* ./src/lang/intl_ro.lang */ const char INTL_ENABLE_OTA[] PROGMEM = "Activează OTA";
/* ./src/lang/intl_ro.lang */ const char INTL_ENABLE_OTA_INFO[] PROGMEM = "OTA activată timp de 60 de secunde.";
/* ./src/lang/intl_ro.lang */ const char INTL_ENABLE_OTA_REFUSE[] PROGMEM = "Activați autorizarea în panoul de configurare pentru a permite încărcarea codului";
/* ./src/lang/intl_ro.lang */ const char INTL_ERROR[] PROGMEM = "numai erori";
/* ./src/lang/intl_ro.lang */ const char INTL_FALBACK_WIFI[] PROGMEM = "Rețea WiFi alternativă";
/* ./src/lang/intl_ro.lang */ const char INTL_FIRMWARE[] PROGMEM = "Versiunea Firmware";
/* ./src/lang/intl_ro.lang */ const char INTL_FS_WIFI[] PROGMEM = "Senzor WiFi";
/* ./src/lang/intl_ro.lang */ const char INTL_FS_WIFI_DESCRIPTION[] PROGMEM = "Senzorul WiFi în modul de configurare";
/* ./src/lang/intl_ro.lang */ const char INTL_FS_WIFI_NAME[] PROGMEM = "Nume";
/* ./src/lang/intl_ro.lang */ const char INTL_HECA[] PROGMEM = "HECA (SHT30) ({t}, {h})";
/* ./src/sensors/heca/heca_ro.lang */ const char INTL_HECA_DC[] PROGMEM = "Ciclul de funcționare";
/* ./src/sensors/heca/heca_ro.lang */ const char INTL_HECA_DESC[] PROGMEM = "HECA (SHT30) (temperatură, umiditate), menține RH sub 70%.";
/* ./src/lang/intl_ro.lang */ const char INTL_HOME[] PROGMEM = "Acasă";
/* ./src/lang/intl_ro.lang */ const char INTL_HUMIDITY[] PROGMEM = "umiditatea";
/* ./src/lang/intl_ro.lang */ const char INTL_I2C_BUS[] PROGMEM = "Pe magistrala I2C";
/* ./src/lang/intl_ro.lang */ const char INTL_LANG[] PROGMEM = "RO";
/* ./src/lang/intl_ro.lang */ const char INTL_LANGUAGE[] PROGMEM = "Limbă";
/* ./src/lang/intl_ro.lang */ const char INTL_LATITUDE[] PROGMEM = "Latitudine";
/* ./src/lang/intl_ro.lang */ const char INTL_LCD[] PROGMEM = "Dispune de caracter LCD";
/* ./src/lang/intl_ro.lang */ const char INTL_LCD1602_27[] PROGMEM = "LCD 1602 (I2C: 0x27)";
/* ./src/lang/intl_ro.lang */ const char INTL_LCD1602_3F[] PROGMEM = "LCD 1602 (I2C: 0x3F)";
/* ./src/lang/intl_ro.lang */ const char INTL_LCD2004_27[] PROGMEM = "LCD 2004 (I2C: 0x27)";
/* ./src/lang/intl_ro.lang */ const char INTL_LCD2004_3F[] PROGMEM = "LCD 2004 (I2C: 0x3F)";
/* ./src/lang/intl_ro.lang */ const char INTL_LEDBAR_32[] PROGMEM = "RGB LED BAR (I2C: 0x32)";
/* ./src/lang/intl_ro.lang */ const char INTL_LONGITUDE[] PROGMEM = "Longitudine";
/* ./src/lang/intl_ro.lang */ const char INTL_MADAVI_LINK[] PROGMEM = "Graficele senzorilor pe Madavi";
/* ./src/lang/intl_ro.lang */ const char INTL_MAX_INFO[] PROGMEM = "Informații maxime";
/* ./src/lang/intl_ro.lang */ const char INTL_MEASUREMENT_INTERVAL[] PROGMEM = "Interval de măsurare";
/* ./src/lang/intl_ro.lang */ const char INTL_MED_INFO[] PROGMEM = "informații medii";
/* ./src/lang/intl_ro.lang */ const char INTL_MHZ14A[] PROGMEM = "Senzor de CO2 Winsen MH-Z14A";
/* ./src/sensors/mhz14a/mhz14a_ro.lang */ const char INTL_MHZ14A_DESC[] PROGMEM = "Winsen MHZ14A - senzor CO2";
/* ./src/lang/intl_ro.lang */ const char INTL_MHZ14A_VAL[] PROGMEM = "WINSEN";
/* ./src/lang/intl_ro.lang */ const char INTL_MIN_INFO[] PROGMEM = "Informații minime";
/* ./src/lang/intl_ro.lang */ const char INTL_MORE_APIS[] PROGMEM = "Mai multe API-uri";
/* ./src/lang/intl_ro.lang */ const char INTL_MORE_SETTINGS[] PROGMEM = "Mai multe setări";
/* ./src/lang/intl_ro.lang */ const char INTL_NEO6M[] PROGMEM = "GPS (NEO 6M)";
/* ./src/lang/intl_ro.lang */ const char INTL_NETWORKS_FOUND[] PROGMEM = "Rețele găsite:";
/* ./src/lang/intl_ro.lang */ const char INTL_NONE[] PROGMEM = "închis";
/* ./src/lang/intl_ro.lang */ const char INTL_NO_NETWORKS[] PROGMEM = "Nu s-a găsit nicio rețea WiFi";
/* ./src/lang/intl_ro.lang */ const char INTL_NTP_TIME[] PROGMEM = "Ora de la serverul NTP";
/* ./src/lang/intl_ro.lang */ const char INTL_NTP_TIME_NOT_ACC[] PROGMEM = "Nu este setat";
/* ./src/sensors/network_watchdog/ntw_wtd_ro.lang */ const char INTL_NTW_WTD_DESC[] PROGMEM = "Watchdog de rețea - repornește senzorul în caz de lipsă de conectivitate";
/* ./src/sensors/network_watchdog/ntw_wtd_ro.lang */ const char INTL_NTW_WTD_ERROR[] PROGMEM = "Aceasta nu este o adresă IP adecvată";
/* ./src/sensors/network_watchdog/ntw_wtd_ro.lang */ const char INTL_NTW_WTD_HOST[] PROGMEM = "Adresa pentru test (IP)";
/* ./src/lang/intl_ro.lang */ const char INTL_NUMBER_OF_MEASUREMENTS[] PROGMEM = "Numărul de măsurători:";
/* ./src/lang/intl_ro.lang */ const char INTL_PARAMETER[] PROGMEM = "Parametru";
/* ./src/lang/intl_ro.lang */ const char INTL_PARTICLES_PER_LITER[] PROGMEM = "particule/litru";
/* ./src/lang/intl_ro.lang */ const char INTL_PARTICULATE_MATTER[] PROGMEM = "pulberi în suspensie";
/* ./src/lang/intl_ro.lang */ const char INTL_PASSWORD[] PROGMEM = "Parola de acces";
/* ./src/lang/intl_ro.lang */ const char INTL_PATH[] PROGMEM = "Calea de acces";
/* ./src/lang/intl_ro.lang */ const char INTL_PMS[] PROGMEM = "Plantower PMS(1,3,5,6,7)003 ({pm})";
/* ./src/lang/intl_ro.lang */ const char INTL_PM_SENSOR[] PROGMEM = "Senzor de pulberi în suspensie";
/* ./src/lang/intl_ro.lang */ const char INTL_PORT[] PROGMEM = "Portul";
/* ./src/lang/intl_ro.lang */ const char INTL_PRESSURE[] PROGMEM = "presiunea aerului";
/* ./src/lang/intl_ro.lang */ const char INTL_READ_FROM[] PROGMEM = "Citiți de la {v}";
/* ./src/lang/intl_ro.lang */ const char INTL_REALLY_RESTART_SENSOR[] PROGMEM = "Sunteți sigur că doriți să reporniți senzorul?";
/* ./src/lang/intl_ro.lang */ const char INTL_RESTART[] PROGMEM = "Reporniți";
/* ./src/lang/intl_ro.lang */ const char INTL_RESTART_DEVICE[] PROGMEM = "Reporniți dispozitivul";
/* ./src/lang/intl_ro.lang */ const char INTL_RESTART_SENSOR[] PROGMEM = "Reporniți senzorul";
/* ./src/lang/intl_ro.lang */ const char INTL_SAVE[] PROGMEM = "Salvați";
/* ./src/lang/intl_ro.lang */ const char INTL_SAVE_AND_RESTART[] PROGMEM = "Salvați și reporniți";
/* ./src/lang/intl_ro.lang */ const char INTL_SDS011[] PROGMEM = "SDS011 ({pm})";
/* ./src/sensors/sds011/sds011_ro.lang */ const char INTL_SDS011_DESC[] PROGMEM = "SDS011 - Senzor PM2.5/PM10";
/* ./src/sensors/sds011/sds011_ro.lang */ const char INTL_SDS011_FAILED_READINGS[] PROGMEM = "Citiri eșuate/total (contor resetat cu verificarea actualizării)";
/* ./src/sensors/sds011/sds011_ro.lang */ const char INTL_SDS011_HWR[] PROGMEM = "Repornire dispozitiv hardware";
/* ./src/sensors/sds011/sds011_ro.lang */ const char INTL_SDS011_LCD_HDR[] PROGMEM = "Citiri SDS011:";
/* ./src/sensors/sds011/sds011_ro.lang */ const char INTL_SDS011_READTIME[] PROGMEM = "Timp de măsurare (ms)";
/* ./src/sensors/sds011/sds011_ro.lang */ const char INTL_SDS011_WARMUP[] PROGMEM = "Timp de încălzire înainte de măsurare (ms)";
/* ./src/lang/intl_ro.lang */ const char INTL_SEND_TO[] PROGMEM = "Trimiteți la {v}";
/* ./src/lang/intl_ro.lang */ const char INTL_SEND_TO_OWN_API[] PROGMEM = "Trimiteți date către propriul API";
/* ./src/lang/intl_ro.lang */ const char INTL_SENSOR[] PROGMEM = "Senzor";
/* ./src/lang/intl_ro.lang */ const char INTL_SENSORS[] PROGMEM = "Senzorii";
/* ./src/lang/intl_ro.lang */ const char INTL_SENSOR_IS_REBOOTING[] PROGMEM = "Senzorul se restartează.";
/* ./src/lang/intl_ro.lang */ const char INTL_SENSOR_IS_REBOOTING_NOW[] PROGMEM = "Senzorul este în curs de repornire. Așteptați câteva secunde și faceți clic pe butonul de mai jos";
/* ./src/lang/intl_ro.lang */ const char INTL_SERVER[] PROGMEM = "Server";
/* ./src/lang/intl_ro.lang */ const char INTL_SHOW_WIFI_INFO[] PROGMEM = "Afișarea informațiilor despre conexiunea WiFi pe ecranul LCD";
/* ./src/sensors/sht3x/sht3x_ro.lang */ const char INTL_SHT3X_DESC[] PROGMEM = "SHT3x - senzor de temperatură și umiditate";
/* ./src/sensors/sht3x/sht3x_ro.lang */ const char INTL_SHT3X_RESULTS[] PROGMEM = "Umiditate și temperatură";
/* ./src/sensors/sht3x/sht3x_ro.lang */ const char INTL_SHT3x_HUM[] PROGMEM = "Umiditate relativă";
/* ./src/sensors/sht3x/sht3x_ro.lang */ const char INTL_SHT3x_TEMP[] PROGMEM = "Temperatura";
/* ./src/lang/intl_ro.lang */ const char INTL_SIGNAL_QUALITY[] PROGMEM = "calitatea semnalului";
/* ./src/lang/intl_ro.lang */ const char INTL_SIGNAL_STRENGTH[] PROGMEM = "puterea semnalului";
/* ./src/sensors/sps30/sps30_ro.lang */ const char INTL_SPS30_CONCENTRATION[] PROGMEM = "pcs/cm³";
/* ./src/sensors/sps30/sps30_ro.lang */ const char INTL_SPS30_CONCENTRATIONS[] PROGMEM = "Concentrația de particule în suspensie";
/* ./src/sensors/sps30/sps30_ro.lang */ const char INTL_SPS30_COUNTS[] PROGMEM = "Numărul de particule";
/* ./src/sensors/sps30/sps30_ro.lang */ const char INTL_SPS30_FW_FAIL[] PROGMEM = "Citirea a eșuat";
/* ./src/sensors/sps30/sps30_ro.lang */ const char INTL_SPS30_NOT_STARTED[] PROGMEM = "Nu a început";
/* ./src/sensors/sps30/sps30_ro.lang */ const char INTL_SPS30_NO_RESULT[] PROGMEM = "niciun rezultat";
/* ./src/sensors/sps30/sps30_ro.lang */ const char INTL_SPS30_REFRESH[] PROGMEM = "Pauză între măsurătorile de salvare";
/* ./src/sensors/sps30/sps30_ro.lang */ const char INTL_SPS30_SENSOR_DESC[] PROGMEM = "Sensirion SPS30 - senzor de particule în suspensie de mare precizie";
/* ./src/sensors/sps30/sps30_ro.lang */ const char INTL_SPS30_SIZE[] PROGMEM = "µm";
/* ./src/lang/intl_ro.lang */ const char INTL_STATUS_PAGE[] PROGMEM = "Starea senzorului";
/* ./src/lang/intl_ro.lang */ const char INTL_TEMPERATURE[] PROGMEM = "temperatura";
/* ./src/lang/intl_ro.lang */ const char INTL_TIME[] PROGMEM = "Timp";
/* ./src/lang/intl_ro.lang */ const char INTL_TIME_FROM_UPDATE[] PROGMEM = "Timpul de la ultima încercare de actualizare";
/* ./src/lang/intl_ro.lang */ const char INTL_TIME_SINCE_LAST_MEASUREMENT[] PROGMEM = " secunde de la ultima măsurare.";
/* ./src/lang/intl_ro.lang */ const char INTL_TIME_TO_MEASUREMENT[] PROGMEM = "Încă {v} secunde până la măsurare";
/* ./src/lang/intl_ro.lang */ const char INTL_UPDATE_ALFA[] PROGMEM = "alfa (fw experimental, nu folosiți decât dacă puteți recupera senzorul)";
/* ./src/lang/intl_ro.lang */ const char INTL_UPDATE_BETA[] PROGMEM = "beta (teste de stabilitate pentru noile caracteristici)";
/* ./src/lang/intl_ro.lang */ const char INTL_UPDATE_STABLE[] PROGMEM = "stabil (a se utiliza în caz de îndoială)";
/* ./src/lang/intl_ro.lang */ const char INTL_USER[] PROGMEM = "Utilizatorul";
/* ./src/lang/intl_ro.lang */ const char INTL_VALUE[] PROGMEM = "Valoare";
/* ./src/lang/intl_ro.lang */ const char INTL_WARNING[] PROGMEM = "avertismente";
/* ./src/lang/intl_ro.lang */ const char INTL_WIFI_NETWORKS[] PROGMEM = "Încărcare rețele wifi ...";
/* ./src/lang/intl_ro.lang */ const char INTL_WIFI_PHY_MODE[] PROGMEM = "Mod WiFi Phy (1=B / 2=G / 3=N)";
/* ./src/lang/intl_ro.lang */ const char INTL_WIFI_SETTINGS[] PROGMEM = "Setări WiFi";
/* ./src/lang/intl_ro.lang */ const char INTL_WIFI_TX_PWR[] PROGMEM = "Puterea TX 0-20,5 (dBm)";
/* ./src/lang/intl_ro.lang */ const char LUFTDATEN_INFO_LOGO_SVG[] PROGMEM = "<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"120px\" height=\"90px\" version=\"1.0\" style=\"shape-rendering:geometricPrecision; text-rendering:geometricPrecision; image-rendering:optimizeQuality; fill-rule:evenodd; clip-rule:evenodd\" viewBox=\"0 0 120 90\" xmlns:xlink=\"http://www.w3.org/1999/xlink\"><g id=\"NAM Logo\"><path fill=\"#fff\" d=\"M50 27c0,1 -1,2 -2,2 -1,0 -2,-1 -2,-2 0,-8 6,-14 14,-14 7,0 13,6 13,14 0,7 -6,13 -13,13l-32 0c-12,0 -21,10 -21,21 0,14 13,23 26,20 2,-1 3,-1 5,-2 1,-1 2,0 3,1 1,1 0,2 -1,3 -10,6 -22,4 -30,-4 -10,-10 -10,-26 0,-36 4,-4 11,-7 18,-7l32 0c8,0 12,-10 6,-16 -6,-6 -16,-1 -16,7zm5 52c0,0 -1,0 -1,0l0 0 -1 -2 -3 0c0,1 0,2 0,2 -1,0 -1,0 -2,0 0,0 0,0 0,0l3 -8c0,0 0,0 0,0l0 0c1,0 2,0 2,0l3 8c0,0 0,0 -1,0l0 0zm6 -13c0,0 0,-8 0,-10 0,-2 1,-2 1,-2l6 0 0 2 -4 0 0 3 4 0 0 2 -4 0 0 3 4 0 0 2 -7 0zm11 0l0 -10 -4 0c0,0 0,-2 2,-2l17 0 0 2 -3 0 0 10 -3 0 0 -10c-2,0 -4,0 -6,0l0 10 -3 0zm16 0c0,0 0,-8 0,-10 0,-2 3,-2 3,-2l0 12 -3 0zm22 -12c2,0 3,0 5,1 1,2 2,3 2,5 0,2 -1,4 -2,5 -2,1 -3,2 -5,2 -1,0 -3,-1 -4,-2 -2,-1 -2,-3 -2,-5 0,-2 0,-3 2,-5 1,-1 3,-1 4,-1zm0 2c-1,0 -1,0 -2,1 -1,1 -1,2 -1,3 0,2 0,3 1,3 0,1 1,2 2,2 1,0 2,-1 3,-2 0,-1 1,-2 1,-3 0,-1 -1,-2 -1,-3 -1,-1 -2,-1 -3,-1zm-62 10c0,0 0,-8 0,-10 0,-2 2,-2 2,-2l7 8c0,0 0,-4 0,-6 0,-2 2,-2 2,-2l0 12 -2 0 -7 -8 0 6 0 2 -2 0 0 0zm55 -6c0,0 -3,0 -3,0 -2,0 -2,2 -2,2l3 0c0,2 0,2 0,2 -1,0 -1,1 -2,1 -1,0 -2,-1 -3,-2 -1,0 -1,-2 -1,-3 0,-1 0,-2 1,-3 1,-1 2,-1 3,-1 1,0 2,0 3,0l1 -1c-2,-1 -3,-1 -4,-1 -1,0 -2,0 -3,0 -1,1 -2,1 -3,2 -1,1 -1,3 -1,4 0,1 0,2 0,3 1,1 1,2 2,2 2,1 3,2 5,2 1,0 3,-1 4,-1l0 -6 0 0zm-52 16l2 0 -1 -2 -1 2zm6 3c0,0 -1,0 -1,0l0 -8c0,0 1,0 1,0 1,0 1,0 1,0l0 8c0,0 0,0 -1,0zm4 -3l0 3c0,0 -1,0 -1,0 -1,0 -1,0 -1,0l0 -8c0,0 0,0 1,0 1,0 2,0 3,0 1,0 1,1 2,1l0 0c0,2 0,3 -2,4l2 3c1,0 0,0 0,0l0 0c-1,0 -1,0 -2,0l-2 -3 0 0zm0 -1c1,0 2,0 2,-1 0,-1 -1,-1 -2,-1l0 2zm11 1l3 -5c0,0 0,0 0,0l0 0c0,0 0,0 0,0l0 0 1 0c0,0 0,0 0,0l0 8c0,0 0,0 -1,0 0,0 0,0 0,0l0 -4 -2 3c0,0 -1,0 -2,0l-1 -3 0 4c0,0 -1,0 -2,0 0,0 0,0 0,0l0 -8c0,0 0,0 1,0 0,0 1,0 1,0l2 5zm13 -1c0,6 -8,6 -8,0 0,-6 8,-6 8,0zm-2 0c0,-1 0,-1 0,-2l0 0c-1,-1 -2,-1 -3,0l0 0c-2,1 -1,5 2,5 1,-1 1,-2 1,-3zm4 -4c0,0 0,0 0,0l4 5 0 -5c0,0 1,0 1,0 0,0 1,0 1,0l0 8c0,1 -1,0 -2,0l0 0 0 0 -3 -5 0 5c0,0 -1,0 -2,0 0,0 0,0 0,0l0 -8c0,0 0,0 1,0zm8 8c0,0 -1,0 -1,0l0 -8c0,0 1,0 1,0 1,0 1,0 1,0l0 8c0,0 0,0 -1,0zm8 -8c0,2 0,2 -3,2l0 6c0,0 0,0 -1,0 0,0 -1,0 -1,0l0 -6c-2,0 -2,0 -2,-2 0,0 0,0 1,0l5 0c1,0 1,0 1,0zm7 4c0,6 -8,6 -8,0 0,-6 8,-6 8,0zm-2 0c0,-1 0,-1 0,-2l0 0c-1,-1 -2,-1 -3,0l0 0c-2,1 -1,5 2,5 1,-1 1,-2 1,-3zm5 1l0 3c0,0 -1,0 -2,0 0,0 0,0 0,0l0 -8c0,0 0,0 0,0 1,0 3,0 4,0 2,1 2,4 0,5l2 3c1,0 0,0 0,0l0 0c-1,0 -1,0 -2,0l-2 -3 0 0zm0 -1c1,0 2,0 2,-1 0,-1 -1,-1 -2,-1l0 2zm-85 -18c-3,0 -6,2 -7,4 1,2 4,4 7,4 3,0 5,-2 7,-4 -2,-2 -4,-4 -7,-4zm0 2c1,0 2,1 2,2 0,1 -1,2 -2,2 -2,0 -3,-1 -3,-2 0,-1 1,-2 3,-2zm22 -48c-1,0 -2,0 -3,-1 0,-1 0,-2 1,-3 9,-5 20,-4 28,4 9,8 9,23 0,32 -4,4 -10,7 -16,7l-32 0c-7,0 -12,5 -12,11 0,6 5,11 12,11 7,0 13,-7 11,-14 -1,-1 0,-2 1,-3 2,0 3,1 3,2 3,10 -5,20 -15,20 -9,0 -16,-7 -16,-16 0,-9 7,-16 16,-16l32 0c10,0 18,-8 18,-18 0,-12 -12,-21 -23,-18 -2,0 -3,1 -5,2z\"/></g></svg>";
/* ./src/sensors/sht3x/sht3x_ro.lang */ const char SENSOR_SHT3[] PROGMEM = "SHT3x";
 const char INTL_USE_HTTPS[] PROGMEM = "Translate RO: INTL_USE_HTTPS 🐱;";
 const char INTL_OTHER_APIS[] PROGMEM = "Translate RO: INTL_OTHER_APIS 🐱;";
 const char INTL_TAB_BASIC[] PROGMEM = "Translate RO: INTL_TAB_BASIC 🐱;";
 const char INTL_TAB_API[] PROGMEM = "Translate RO: INTL_TAB_API 🐱;";
 const char INTL_TAB_SENSORS[] PROGMEM = "Translate RO: INTL_TAB_SENSORS 🐱;";
 const char INTL_TAB_ADVANCED[] PROGMEM = "Translate RO: INTL_TAB_ADVANCED 🐱;";


#endif
