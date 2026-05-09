bool fanState = false;

void loop() {

  int value = analogRead(tempSensor);

  float temperature =
      (value * 5.0 * 100.0) / 1024.0;

  if (temperature > 30) {
    fanState = true;
  }

  if (temperature < 27) {
    fanState = false;
  }

  digitalWrite(fanPin, fanState);

  delay(500);
}
