#include "f32cStatusLeds.h"

StatusLeds::StatusLeds() {

}

void StatusLeds::begin() {
  for(int i = 8; i < 16; ++i) {
    pinMode(i, OUTPUT);
  }
  for(int i = 8; i < 16; ++i) {
    digitalWrite(i, LOW);
  }
  for(int i = 8; i < 16; ++i) {
    digitalWrite(i, HIGH);
    delay(10);
  }
  for(int i = 8; i < 16; ++i) {
    digitalWrite(i, LOW);
    delay(10);
  }
}

void StatusLeds::setValue(uint8_t v) {
  for(int i = 8; i < 16; ++i) {
    digitalWrite(i, 0x01 & (v >> (i -8)));
  }
}

void StatusLeds::setBit(uint8_t n) {
  digitalWrite(n+8, HIGH);
}

void StatusLeds::clearBit(uint8_t n) {
  digitalWrite(n+8, LOW);
}

void StatusLeds::clear() {
  for(int i = 8; i < 16; ++i) {
    digitalWrite(i, LOW);
  }
}
