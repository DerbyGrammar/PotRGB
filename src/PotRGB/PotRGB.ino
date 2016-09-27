/*
  Chris Nethercott / ThorinDev
  PotRGB
*/

const int potPin[] = {
  A0,
  A1,
  A2
};
const int ledPin[] = {
  2,
  3,
  4
};

void setup() {
  pinSetup();
}

void loop() {
  for(int i = 0; i < sizeof(ledPin); i++) {
    delay(5);
    potValue = analogRead(rgbPotPins[i]);
    pwmValue = map(potValue, 0, 1023, 0, 255);
    analogWrite(rgbPwmPins[i], pwmValue);
  }
}

void pinSetup() {
  for(int i = 0; i < sizeof(potPin); i++) {
    pinMode(potPin, INPUT);
  }
  for(int i = 0; i < sizeof(ledPin); i++) {
    pinMode(ledPin, OUTPUT); 
  }
}
