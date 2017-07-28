void setup() 
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() 
{
  int x = 1;
  for (int n = 16; n > 0; n = n - x)
  {
    SQone();
    SQtwo();
  }
  delay(5000);
  SQthree();
}

void SQone()
{
  int x = 1;
  for (int n = 2; n > 0; n = n - x)
  {
    digitalWrite(7, HIGH);
    delay(125);
    digitalWrite(7, LOW);
    delay(125);
    digitalWrite(7, HIGH);
    delay(125);
    digitalWrite(7, LOW);
    delay(125);
    digitalWrite(7, HIGH);
    delay(250);
    digitalWrite(7, LOW);
    delay(115);
  }
}
void SQtwo()
{
  int x = 1;
  for (int n = 1; n > 0; n = n - 1)
  {
    digitalWrite(13, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(5, HIGH);
    delay(275);
    digitalWrite(13, LOW);
    digitalWrite(9, LOW);
    digitalWrite(5, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(3, HIGH);
    delay(260);
    digitalWrite(11, LOW);
    digitalWrite(7, LOW);
    digitalWrite(3, LOW);
    delay(250);
    digitalWrite(13, HIGH);
    digitalWrite(11, HIGH);
    delay(200);
    digitalWrite(13, LOW);
    digitalWrite(11, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(7, HIGH);
    delay(200);
    digitalWrite(9, LOW);
    digitalWrite(7, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(3, HIGH);
    delay(200);
    digitalWrite(5, LOW);
    digitalWrite(3, LOW);
    delay(150);
  }
}
void SQthree()
{
    int x = 1;
    for (int n = 2; n > 0 ; n = n - x)
    {
      digitalWrite(13, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(5, HIGH);
      delay(125);
      digitalWrite(13, LOW);
      digitalWrite(9, LOW);
      digitalWrite(5, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(3, HIGH);
      delay(125);
      digitalWrite(11, LOW);
      digitalWrite(7, LOW);
      digitalWrite(3, LOW);
      delay(125);
    }
    digitalWrite(13, HIGH);
    digitalWrite(11, HIGH);
    delay(200);
    digitalWrite(13, LOW);
    digitalWrite(11, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(7, HIGH);
    delay(200);
    digitalWrite(9, LOW);
    digitalWrite(7, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(3, HIGH);
    delay(200);
    digitalWrite(5, LOW);
    digitalWrite(3, LOW);
    delay(250);
    digitalWrite(11, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(3, HIGH);
    delay(125);
    digitalWrite(11, LOW);
    digitalWrite(7, LOW);
    digitalWrite(3, LOW);
    delay(125);
}

 /*
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(11, HIGH);
  delay(1000);
  digitalWrite(11, LOW);
  delay(1000);
  digitalWrite(9, HIGH);
  delay(1000);
  digitalWrite(9, LOW);
  delay(1000);
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(7, LOW);
  delay(1000);
  digitalWrite(5, HIGH);
  delay(1000);
  digitalWrite(5, LOW);
  delay(1000);
  digitalWrite(3, HIGH);
  delay(1000);
  digitalWrite(3, LOW);
  delay(1000);

//void loop()
{
   int x = 1;
   for (int i = 0; i > -1; i = i + x){
      analogWrite(PWMpin, i);
      if (i == 255) x = -1;             // switch direction at peak
      delay(10);
   } 
}
*/
  
  
  
