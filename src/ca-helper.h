#pragma once
#include <WiFiClientSecure.h>
#if defined(ARDUINO_ARCH_ESP8266)
extern void configureCACertTrustAnchor(WiFiClientSecure* client, BearSSL::X509List* x509_ca_root = nullptr);
#else
extern void configureCACertTrustAnchor(WiFiClientSecure* client, const char* ca_root = nullptr);
#endif