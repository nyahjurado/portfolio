#include <Servo.h>
Servo servoRight;
Servo servoLeft;

void setup() 
{
  servoLeft.attach(13);
  servoRight.attach(12);
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1500);
}

void loop() 
{
  
  {
    int z = 1;
    for (int n = 8; n > 0; n = n - z)
    {
      SQ1();
      SQ3();
    }
  }
  SQ2();
  delay(2920);
  SQ4();
  SQ5();
  {
    int s = 1;
    for(int n = 10; n > 0; n = n - s)
    {
      SQ1();
      SQ3();
    }
  }
  SQ6();
  SQ2();
  delay(2920);
  SQ4();
  SQ5();
}


void SQ1()
{
  int q = 1;
  for (int n = 2; n > 0; n = n - q)
  {
    int x = 1;
    for (int n = 2; n > 0; n = n - x)
    {
      servoLeft.writeMicroseconds(1700);
      servoRight.writeMicroseconds(1300);
      delay(230);
      servoLeft.writeMicroseconds(1500);
      servoRight.writeMicroseconds(1500);
      delay(140); 
    }
    servoRight.writeMicroseconds(1700);
    servoLeft.writeMicroseconds(1700);
    delay(350);
    servoRight.writeMicroseconds(1500);
    servoLeft.writeMicroseconds(1500);
    delay(170);
  }
}

void SQ2()
{
  int q = 1;
  for(int n = 3; n > 0; n = n - q)
  {
    int x = 1;
    for(int n = 3; n > 0; n = n - x)
    {
      servoLeft.writeMicroseconds(1700);
      servoRight.writeMicroseconds(1300);
      delay(300);
      servoLeft.writeMicroseconds(1500);
      servoRight.writeMicroseconds(1500);
      delay(80);
    }
    int p = 1;
    for(int n = 3; n > 0; n = n - p)
    {
      servoLeft.writeMicroseconds(1300);
      servoRight.writeMicroseconds(1700);
      delay(300);
      servoLeft.writeMicroseconds(1500);
      servoRight.writeMicroseconds(1500);
      delay(80);
    }
    delay(500);
  }
}

void SQ3()
{
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1500);
  delay(200);
}

void SQ4()
{
 // int s = 1;
  //for(int n = 6; n > 0; n = n - s)
 {
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1700);
  delay(22400);
 }
}

void SQ5()
{
  int v = 1;
  for(int n = 35; n > 0; n = n - v)
  {
    servoLeft.writeMicroseconds(1700);
    servoRight.writeMicroseconds(1300);
    delay(300);
    servoLeft.writeMicroseconds(1700);
    servoRight.writeMicroseconds(1700);
    delay(300);
  }
}

void SQ6()
{
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1300);
  delay(600);
}


