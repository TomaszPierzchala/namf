#include "helpers.h"
#include "ca-helper.h"

#if defined(ARDUINO_ARCH_ESP8266)
void configureCACertTrustAnchor(WiFiClientSecure* client, BearSSL::X509List* x509_ca_root){
#else
void configureCACertTrustAnchor(WiFiClientSecure* client, const char* ca_root){
#endif
    // check if the time is set. If not, disable the validation of the certificate
    constexpr time_t fw_built_year = (__DATE__[ 7] - '0') * 1000 + \
							  (__DATE__[ 8] - '0') *  100 + \
							  (__DATE__[ 9] - '0') *   10 + \
							  (__DATE__[10] - '0');
    if (time(nullptr) < (fw_built_year - 1970) * 365 * 24 * 3600) {
        debug_out(F("Time incorrect; Disabling CA verification."), DEBUG_MIN_INFO,1);
        client->setInsecure();
    }
    else { // main security branch
#if defined(ARDUINO_ARCH_ESP8266)
        if (x509_ca_root != nullptr) {
            client->setTrustAnchors(x509_ca_root);
        }
#else
        if (ca_root != nullptr) {
            client->setCACert(ca_root);
        }
#endif
        else {
            debug_out(F("Nullpointer to the CA - client setInsecure()!"), DEBUG_MIN_INFO,1);
            client->setInsecure();
            return;
        }
    }
}
