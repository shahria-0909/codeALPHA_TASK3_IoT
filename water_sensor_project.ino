
const int sensorPin = A0;
const int ledPin = 7;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  Serial.println("Water Sensor Project");
}

void loop() {
  int waterValue = analogRead(sensorPin);

  Serial.print("Water Sensor Value: ");
  Serial.println(waterValue);

  if (waterValue > 300) {
    digitalWrite(ledPin, HIGH);  // Green LED ON
    Serial.println("Water detected!");
  } else {
    digitalWrite(ledPin, LOW);   // Green LED OFF
    Serial.println("No water detected.");
  }

  delay(1000);
}
