#include <Arduino.h>
#include <util/delay.h>

void setup() {
  DDRB |= _BV(DDB0);
}

void loop() {
  PORTB ^= _BV(PB0);
  _delay_ms(500);
}