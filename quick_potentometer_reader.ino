void setup() {

Serial.begin(9600); //initialize serial communication at 9600 bits/sec
//int LED;
}

void loop() {
int sensorValue = analogRead(A0); // read the input on analog pin 0:
//int LED = map(sensorValue, 0, 1023, 2, 6); //Mapping 0-1023 to 2-6
// print out the LED value you read:
Serial.println(LED);
}
