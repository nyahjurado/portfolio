#include <Servo.h>

int rightWhiskerPin = 5;
int leftWhiskerPin = 7;

int rightWhiskerState = 1;
int leftWhiskerState = 1;

Servo servoRight;
Servo servoLeft;

void setup()
{
pinMode(rightWhiskerPin, INPUT);
pinMode(leftWhiskerPin, INPUT);

Serial.begin(9600);

servoLeft.attach(12);
servoRight.attach(13);

servoLeft.writeMicroseconds(1500);
servoRight.writeMicroseconds(1500);
}

void loop()
{
rightWhiskerState = digitalRead(rightWhiskerPin);
leftWhiskerState = digitalRead(leftWhiskerPin);


if ((rightWhiskerState == 0) and (leftWhiskerState == 0))
{
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1300);
  delay(2000);
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1700);
  delay(500);
}
  
else if (rightWhiskerState == 0)
{
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1300);
  delay(2000);
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1700);
  delay(500);
}

else if (leftWhiskerState == 0)
{
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1300);
  delay(2000);
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1300);
  delay(500+
  );
}
  
else
{
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1700);
  
}
}
