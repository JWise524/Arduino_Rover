int soundPin = 12;

void setup() {
  pinMode(soundPin, OUTPUT);
}

void loop() {
  digitalWrite(soundPin, HIGH);
  delay(100);
  digitalWrite(soundPin, LOW);
  delay(1000);
}

