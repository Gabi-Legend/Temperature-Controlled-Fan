int d1=5;
int d2=6;

void setup() {
  pinMode(d1, OUTPUT);
  pinMode(d2, OUTPUT);
}

void loop() {
  //Testing
  digitalWrite(d1, HIGH);
  digitalWrite(d2, LOW);
  delay(1500);
  digitalWrite(d2, HIGH);
  digitalWrite(d1, LOW);
  delay(1500);

}
