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
  int potValue;
  int pwnValue;
  
  for(int i = 0; i < sizeof(ledPin); i++) {
    potValue = analogRead(potPin[i]);
    pwmValue = map(potValue, 0, 1023, 0, 255);
    analogWrite(ledPin[i], pwmValue);
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
