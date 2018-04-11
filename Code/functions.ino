void setServo( Servo myServo, int command)
{
  int currentPos=myServo.read();

  if(currentPos<command)
  {
    for(currentPos;currentPos<command;currentPos+=10)
    {
      myServo.write(currentPos);
      delay(10);
    }
  }
  else if(currentPos>command)
  {
    for(currentPos;currentPos>command;currentPos-=10)
    {
      myServo.write(currentPos);
      delay(10);
    }
  }
}
