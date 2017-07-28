#include <Servo.h>
Servo servoRight;
Servo servoLeft;

void setup() {
  servoLeft.attach(13);
  servoRight.attach(12);
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1500);


}

void loop() {
servoLeft.writeMicroseconds(1300);
delay(5000);
servoRight.writeMicroseconds(1300);
delay(5000);
servoLeft.writeMicroseconds(1700);
delay(2000);
servoRight.writeMicroseconds(1700);
delay(2000);


}
