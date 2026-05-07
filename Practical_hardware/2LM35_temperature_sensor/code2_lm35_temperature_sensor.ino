void setup() {
  Serial.begin(9600);
}

void loop() {
  int adc=analogRead(A0);
  float voltage=adc*(5.0/1023.0);
  float temperature=voltage/0.01;
  Serial.println("ADC:");
  Serial.println(adc);
  Serial.println("Voltage:");
  Serial.println(voltage);
  Serial.println("Temperature:");
  Serial.println(temperature);
  delay(1000);
}
