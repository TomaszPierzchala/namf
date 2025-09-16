#include <Arduino.h>
#include "ext_def.h"
#if defined(ESP8266)
  #include <user_interface.h>
  #define hw_random() os_random()
#elif defined(ESP32)
  #include "esp_system.h"
  #define hw_random() esp_random()
#endif
#include <WString.h>

// Character set for WPA2-PSK password (8..63 ASCII characters)
static const char PASSWORD_CHARS[] =
  "ABCDEFGHJKLMNPQRSTUVWXYZ"   // excluded I/O for readability
  "abcdefghijkmnopqrstuvwxyz"  // excluded l
  "23456789"                   // excluded 0/1
  "@#$+-_";               // some safe symbols

// Returns a random byte from hardware RNG
static inline uint8_t hwRandByte() {
  return static_cast<uint8_t>(hw_random() & 0xFF);
}

// Generates a random password of given length (min 8, max 64)
String generateRandomPassword(uint8_t length = MIN_PASSWD_LENGTH) {
  if (length < MIN_PASSWD_LENGTH)  length = MIN_PASSWD_LENGTH;
  if (length > 64) length = 64;

  const size_t K = sizeof(PASSWORD_CHARS) - 1; // exclude '\0'
  String out;
  out.reserve(length);

  // Avoid modulo bias by discarding values above the largest
  // multiple of K fitting in 0..255.
  const uint16_t threshold = 256 - (256 % K);

  while (out.length() < length) {
    uint8_t r = hwRandByte();
    if (r >= threshold) continue; // discard to keep uniform distribution
    out += PASSWORD_CHARS[r % K];
  }
  return out;
}

bool isPasswordValid(const char* pwd) {
  if (pwd == nullptr) return false;  // reject null pointer

  // iterate through each character until the null terminator '\0'
  for (const char* p = pwd; *p != '\0'; ++p) {
    // check if current character exists in the allowed set
    if (strchr(PASSWORD_CHARS, *p) == nullptr) {
      return false;  // found a disallowed character
    }
  }
  return true;  // all characters are valid
}

