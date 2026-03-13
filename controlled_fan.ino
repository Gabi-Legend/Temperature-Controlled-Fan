int d1 = 5;
int d2 = 6;
int temp_sensor = A0;

void setup() {
  pinMode(d1, OUTPUT);
  pinMode(d2, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  int value = analogRead(temp_sensor);
  Serial.println(value);

  digitalWrite(d1, HIGH);
  digitalWrite(d2, LOW);
  delay(1500);

  digitalWrite(d2, HIGH);
  digitalWrite(d1, LOW);
  delay(1500);
}