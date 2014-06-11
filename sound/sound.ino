int soundPin = 12;

void setup() {
  pinMode(soundPin, OUTPUT);
}

void loop() {
  digitalWrite(soundPin, HIGH);
  delay(150);
  digitalWrite(soundPin, LOW);
  delay(2000);
}

