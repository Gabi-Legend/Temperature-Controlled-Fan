int d1 = 5;
int temp_sensor = A0;

void setup() {
  pinMode(d1, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  int value = analogRead(temp_sensor);
  Serial.println(value);

  if (value > 60) {
    digitalWrite(d1, HIGH);
  } else {
    digitalWrite(d1, LOW);
  }

  delay(500);
}