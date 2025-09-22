#pragma once
#include <WiFiClientSecure.h>
extern void configureCACertTrustAnchor(WiFiClientSecure* client, 
                                      BearSSL::X509List* x509_ca_root = nullptr, 
                                      const char* ca_root = nullptr);