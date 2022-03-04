/**
 * Ex 2.1
 * Send variable, and Strings from Arduino to PC
 */

int number = 0;

void setup() {
    // Set baud rate to 9600bps
    Serial.begin(9600);
}

void loop() {
    Serial.print(number);
    Serial.println(" sec");

    delay(1000);
    number++;
}