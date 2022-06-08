#include <Arduino.h>
#include <stros.h>
#include <util/delay.h>

int state;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  state = on();
}

void loop() {
  // put your main code here, to run repeatedly:
  _delay_ms(1000);
  if (state) {
    state = off();
  } else if (!state) {
    state = on();
  }
  digitalWrite(LED_BUILTIN, state);
}