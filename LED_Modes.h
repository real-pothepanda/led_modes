void blink() {
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH);
  }
  delay(500);
  
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], LOW);
  }
  delay(500); 
}

void alt() {
  for (int i = 0; i < 3; i++) digitalWrite(ledPins[i], HIGH);
  for (int i = 3; i < 6; i++) digitalWrite(ledPins[i], LOW);
  delay(500);
  for (int i = 0; i < 3; i++) digitalWrite(ledPins[i], LOW);
  for (int i = 3; i < 6; i++) digitalWrite(ledPins[i], HIGH);
  delay(500);
  for (int i = 0; i < numLeds; i++) { 
    digitalWrite(ledPins[i], LOW);
  }
}

void run() {
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(500);
    digitalWrite(ledPins[i], LOW);
  }
  for (int i = numLeds - 2; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH);
    delay(500);
    digitalWrite(ledPins[i], LOW);
  }
}