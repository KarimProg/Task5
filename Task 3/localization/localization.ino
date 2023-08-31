/*
 * File: localization.ino
 * Author: Karim Abogharbia
 * Description: This code gets X,Y location of robot in 5x6 room
 * Date: [22/8/2023]
 */

/* Macros */
#define trigF 13
#define trigR A3
#define trigB A1
#define trigL 8
#define echoF 12
#define echoR A2
#define echoB A0
#define echoL 7

int distanceF, distanceR, distanceB, distanceL, dis;
long duration;
int distanceY, distanceX;

void setup() {
  pinMode(trigF, OUTPUT);
  pinMode(trigR, OUTPUT);
  pinMode(trigB, OUTPUT);
  pinMode(trigL, OUTPUT);
  pinMode(echoF, INPUT);
  pinMode(echoR, INPUT);
  pinMode(echoB, INPUT);
  pinMode(echoL, INPUT);
  Serial.begin(9600);
}

void loop() {
  distanceF = disF();
  distanceR = disR();
  distanceB = disB();
  distanceL = disL();



  //The monitor prints the readings of left and back sensor
  //as they represent x and y coordinates and if they are
  //equal to 0 it uses the readings of front and right sensors
  //subtracted from room dimensions

  if (distanceB == 0) {
    distanceY = 600 - distanceF;
  } else {
    distanceY = distanceB;
  }
  if (distanceL == 0) {
    distanceX = 500 - distanceR;
  } else {
    distanceX = distanceL;
  }

  //results are printed
  Serial.print("Y: ");
  Serial.println(distanceY);
  Serial.print("X: ");
  Serial.println(distanceX);
  Serial.println("");
  delay(2000);
}


/* Function Declarations */
/**
 * @brief Function to calculate distance for front US sensor
 *      and is repeated 3 other times for the 3 other US sensors.
 *      It works by emitting a sound wave and waiting for a response
 *      and seeing the time of the response then through the speed time
 *      equation it calculates the distance.
 */

int disF() {
  digitalWrite(trigF, LOW);
  delayMicroseconds(2);
  digitalWrite(trigF, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigF, LOW);
  duration = pulseIn(echoF, HIGH);
  dis = duration * 0.034 / 2;
  return dis;
}

int disR() {
  digitalWrite(trigR, LOW);
  delayMicroseconds(2);
  digitalWrite(trigR, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigR, LOW);
  duration = pulseIn(echoR, HIGH);
  dis = duration * 0.034 / 2;
  return dis;
}

int disB() {
  digitalWrite(trigB, LOW);
  delayMicroseconds(2);
  digitalWrite(trigB, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigB, LOW);
  duration = pulseIn(echoB, HIGH);
  dis = duration * 0.034 / 2;
  return dis;
}

int disL() {
  digitalWrite(trigL, LOW);
  delayMicroseconds(2);
  digitalWrite(trigL, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigL, LOW);
  duration = pulseIn(echoL, HIGH);
  dis = duration * 0.034 / 2;
  return dis;
}