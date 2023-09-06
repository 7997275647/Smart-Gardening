/* soil_calibrate.ino
  Gets raw reading from soil sensor and displays on Serial Monitor
  Use to establish minuimum and maximum values
  Works with Capacitive and Resistive Sensors
  Uses Raspberry Pi Pico
 
  DroneBot Workshop 2022
  https://dronebotworkshop.com
*/
 
// Variable for sensor value
int sensorval;
 
// Analog input port
#define SENSOR_IN 0
 
 
void setup() {
  // Open Serial Monitor
  Serial.begin(9600);
 
  // Set ADC to use 12 bits
 // analogReadResolution(10);
}
void loop() {
 
  // Read sensor value
  sensorval = analogRead(SENSOR_IN);
 
  // Print to Serial Monitor
  Serial.println(sensorval);
 
  delay(100);
}
