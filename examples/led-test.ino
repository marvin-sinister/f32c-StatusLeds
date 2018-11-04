#include <f32cStatusLeds.h>

StatusLeds sl = StatusLeds();

void setup() {
  Serial.begin(115200);

  sl.begin();

  delay(1200); //wait for serial
}

uint8_t counter = 0;
void loop(void) {
  sl.unsetBit(counter);
  counter *= 2;
  if (!counter) {
    counter++;
  }
}
