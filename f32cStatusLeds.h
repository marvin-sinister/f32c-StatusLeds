#ifndef F32CSTATUSLEDS_H
#define F32CSTATUSLEDS_H

#include <Arduino.h>

class StatusLeds {
  public:
    StatusLeds();
    void begin();
    void setValue(uint8_t v);
    void setBit(uint8_t n);
    void clearBit(uint8_t n);
    void clear();
};

#endif // F32CSTATUSLEDS_H
