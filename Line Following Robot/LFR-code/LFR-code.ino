int LeftMotorForward = 5;
int LeftMotorReverse = 3;

int RightMotorForward = 9;
int RightMotorReverse = 6;

int left = A2;
int right = A1;

void setup()
{
  pinMode(LeftMotorForward, OUTPUT);
  pinMode(RightMotorForward, OUTPUT);
  pinMode(LeftMotorReverse, OUTPUT);
  pinMode(RightMotorReverse, OUTPUT);
  pinMode(left, INPUT);
  pinMode(right, INPUT);
}

void loop()
{
  if (analogRead(left) < 500 && analogRead(right) < 500)
  {
    analogWrite(LeftMotorForward, 150);
    analogWrite(RightMotorForward, 150);
  }

  else if (analogRead(left) < 500 && analogRead(right) >= 500)
  {
    analogWrite(LeftMotorForward, 130);
    analogWrite(RightMotorForward, LOW);
  }

  else if (analogRead(left) >= 500 && analogRead(right) < 500)
  {
    analogWrite(LeftMotorForward, LOW);
    analogWrite(RightMotorForward, 130);
  }

  else
  {
    analogWrite(LeftMotorForward, LOW);
    analogWrite(RightMotorForward, LOW);
  }

}
