#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

int potpin1 = A0;
int potpin2 = A1;
int potpin3 = A2;
int potpin4 = A3;

int val1;
int val2;
int val3;
int val4;

void setup() {
  Serial.begin(9600);
  servo1.attach(10);
  servo2.attach(5);
  servo3.attach(3);
  servo4.attach(11);
}

void loop() {
  val1 = analogRead(potpin1);
  val2 = analogRead(potpin2);
  val3 = analogRead(potpin3);
  val4 = analogRead(potpin4);

  val1 = map(val1, 1023, 0, 0, 180);
  val2 = map(val2, 0, 1023, 0, 180);
  val3 = map(val3, 1023, 0, 0, 180);
  val4 = map(val4, 0, 1023, 0, 180);

  Run();
}

void Run() {
  servo1.write(val4);
  servo2.write(val3);
  servo3.write(val2);
  servo4.write(val1);
}