/* ======================================================
                DIGITAL OUTPUT LED
=========================================================
Description:
 This program blinks an LED connected to GPIOLED0 with
 a 1-second interval.
 
Programmer:
 Pamposa, Rogelio III, V.
 Caro, Mark Denzen, P.
 Emolaga, Roxie Elaine, P.
 
-------------------------------------------------------*/

  const uint8_t SW1 = 35;
  const uint8_t SW2 = 34;
  bool SW1_STATE = 0;
  bool SW2_STATE = 0;

  const int ledPins[6] = {12,14,27,26,25,33};
  const int numLeds = 6;

  #include "LED_Modes.h"
  void setup() {
    pinMode(SW1, INPUT);
    pinMode(SW2, INPUT);
    for (int i = 0; i < numLeds; i++) {
      pinMode(ledPins[i], OUTPUT);
    }
  }

  void loop() {
    SW1_STATE = digitalRead(SW1);
    SW2_STATE = digitalRead(SW2);
    if(SW1_STATE == true && SW2_STATE == false) {  // false is ON or triggered since its ACTIVE LOW
      blink();
    } else if(SW1_STATE == false && SW2_STATE == true) {
      alt();
    } else if(SW1_STATE == false && SW2_STATE == false) {
      run();
    } else {
      for (int i = 0; i < numLeds; i++) {
        digitalWrite(ledPins[i], LOW);
      }
    }
  }
