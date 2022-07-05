int LeftMotorForward = 11;
int LeftMotorReverse = 9;
int RightMotorForward = 3;
int RightMotorReverse = 5;

char command;

void setup()
{
  Serial.begin(9600);

  pinMode(LeftMotorForward, OUTPUT);
  pinMode(RightMotorForward, OUTPUT);
  pinMode(LeftMotorReverse, OUTPUT);
  pinMode(RightMotorReverse, OUTPUT);
}

void loop()
{
  if (Serial.available() > 0)
  {
    command = Serial.read();
    //Serial.println(command);

    Stop(); //initialize with motors stoped

    switch (command)
    {
      case 'F':
        forward();
        break;
      case 'B':
        back();
        break;
      case 'L':
        left();
        break;
      case 'R':
        right();
        break;
      case 'S':
        Stop();
        break;
    }

  }

}
void forward()
{
  analogWrite(LeftMotorForward, 0);
  analogWrite(LeftMotorReverse, 0);
  analogWrite(RightMotorForward, 0);
  analogWrite(RightMotorReverse, 0);

  analogWrite(LeftMotorForward, 255);
  analogWrite(RightMotorForward, 255);
}

void back()
{
  analogWrite(LeftMotorForward, 0);
  analogWrite(LeftMotorReverse, 0);
  analogWrite(RightMotorForward, 0);
  analogWrite(RightMotorReverse, 0);

  analogWrite(LeftMotorReverse, 255);
  analogWrite(RightMotorReverse, 255);
}

void left()
{
  analogWrite(LeftMotorForward, 0);
  analogWrite(LeftMotorReverse, 0);
  analogWrite(RightMotorForward, 0);
  analogWrite(RightMotorReverse, 0);

  analogWrite(LeftMotorReverse, 255);
  analogWrite(RightMotorForward, 255);
}

void right()
{
  analogWrite(LeftMotorForward, 0);
  analogWrite(LeftMotorReverse, 0);
  analogWrite(RightMotorForward, 0);
  analogWrite(RightMotorReverse, 0);

  analogWrite(LeftMotorForward, 255);
  analogWrite(RightMotorReverse, 255);
}

void Stop()
{
  analogWrite(LeftMotorForward, 0);
  analogWrite(LeftMotorReverse, 0);
  analogWrite(RightMotorForward, 0);
  analogWrite(RightMotorReverse, 0);
}
