void setup() {
 // initializes serial communication with a speed of 9600 bit/s
 Serial.begin(9600);
}
// this loop runs for as long as the Arduino has power
void loop() {
 // send a message to the serial port
 Serial.println("Hello My name is Olatunbosun Treasure-Praise, 16CJ020758");
// wait for 3 seconds and then start over
 delay(3000);
}
