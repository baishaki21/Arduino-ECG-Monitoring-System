void setup() {
  // initialize the serial communication:
  Serial.begin(9600);
  pinMode(10, INPUT); // Setup for leads off detection LO +
  pinMode(11, INPUT); // Setup for leads off detection LO -
}

void loop() {
  if ((digitalRead(10) == 1) || (digitalRead(11) == 1)) {
    Serial.println("!"); // Print a message if either lead-off is detected
  } else {
    // Send the value of analog input 0:
    Serial.println(analogRead(A0)); // Print the analog value from A0
  }
  // Wait for a bit to prevent saturating serial data
  delay(1);
}
