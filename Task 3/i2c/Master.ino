/*
 * File: Master.ino
 * Author: Karim Abogharbia
 * Description: Code for master arduino to send data to a slave depending on buttons pressed
 * Date: [22/8/2023]
 */

/* Header Files */
#include <Wire.h>

/* Macros */
#define button1 12
#define button2 13

void setup() {
  Wire.begin();
  Serial.begin(9600);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
}

void loop() {
  int message = 0;

  //button states are tested
  if (digitalRead(button1) == HIGH && digitalRead(button2) == HIGH) {
    message = 1;
  } else if (digitalRead(button1) == HIGH && digitalRead(button2) == LOW) {
    message = 2;
  } else if (digitalRead(button1) == LOW && digitalRead(button2) == HIGH) {
    message = 3;
  } else {
    message = 4;
  }

  //This part simply sends the data over the I2C bus
  Wire.beginTransmission(1);
  Wire.write(message);
  Wire.endTransmission();

  delay(100);
}
