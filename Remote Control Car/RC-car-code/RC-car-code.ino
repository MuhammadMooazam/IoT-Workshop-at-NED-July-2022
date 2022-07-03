int LeftMotorForward = 5;
int LeftMotorReverse = 3;
int RightMotorForward = 9;
int RightMotorReverse = 6;

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

    if (command == "F")
    {
      forward();
      break;
    }

    else if (command == "B")
    {
      back();
      break;
    }

    else if (command == "L")
    {
      left();
      break;
    }

    else if (command == "R")
    {
      right();
      break;
    }

  }

}
void forward()
{
  analogWrite(LeftMotorForward, 255);
  analogWrite(RightMotorForward, 255);
}

void back()
{
  analogWrite(LeftMotorReverse, 255);
  analogWrite(RightMotorReverse, 255);
}

void left()
{
  analogWrite(LeftMotorReverse, 255);
  analogWrite(RightMotorForward, 255);
}

void right()
{
  analogWrite(LeftMotorForward, 255);
  analogWrite(RightMotorReverse, 255);
}

void Stop()
{
  analogWrite(LeftMotorForward, 0);
  analogWrite(RightMotorForward, 0);
}
