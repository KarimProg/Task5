/*
 * File: Slave.ino
 * Author: Karim Abogharbia
 * Description: Slave arduino receives data about what to intensity to light an LED
 * Date: [22/8/2023]
 */

/* Header Files */
#include <Wire.h>

/* Macros */
#define led 11

int message = 0;

void setup() {
  Serial.begin(9600);
  Wire.begin(1);
  Wire.onReceive(check);

  pinMode(led, OUTPUT);
}

void loop() {
}

/* Function Declarations */
/**
 * @brief this function changes led intensity depending on data received from master
 *
 * @param bytes placeholder
 *
 */
void check(int bytes) {
  //this function reads the data if it is available
  while (Wire.available()) {
    message = Wire.read();
  }

  //led intensity is switched accordingly
  switch (message) {
    case 1:
      analogWrite(led, 255);
      Serial.println("Glitch");
      break;

    case 2:
      analogWrite(led, 128);
      Serial.println("Vector focused");
      break;

    case 3:
      analogWrite(led, 192);
      Serial.println("Vector distracted");
      break;

    default:
      analogWrite(led, 0);
      break;
  }
}