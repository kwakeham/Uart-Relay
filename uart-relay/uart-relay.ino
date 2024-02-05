void setup() {
  Serial.begin(115200);           // Initialize the USB serial port
  Serial1.begin(115200);          // Initialize the physical serial port
}

void loop() {
  if (Serial.available()) {     // Check if there is data available on USB serial
    char data = Serial.read();  // Read the data from USB serial
    Serial1.write(data);        // Write the data to physical serial
  }

  if (Serial1.available()) {    // Check if there is data available on physical serial
    char data = Serial1.read(); // Read the data from physical serial
    Serial.write(data);         // Write the data to USB serial
  }
}
