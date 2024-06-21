/*
    Project name : ESP8266 LDR photo resistor module
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-ldr-photo-resistor-module
*/

const int ldrPin = A0; // Analog pin connected to the LDR module

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read the analog value from the LDR module
  int ldrValue = analogRead(ldrPin);
  
  // Print the LDR value to the Serial Monitor
  Serial.print("LDR Value: ");
  Serial.println(ldrValue);
  
  // Add a small delay before the next reading
  delay(1000);
}
