 int ledpin1=5;
  int buttonpin=4;
  int buttonstate=0;
  void setup()
  {
    pinMode(ledpin1,OUTPUT);
    pinMode(buttonpin,INPUT);
    }
void loop()
{
  buttonstate=digitalRead(buttonpin);
  if(buttonstate==HIGH)
  {
  digitalWrite(ledpin1,HIGH);
  delay(1000);
  }
  else
  {
    digitalWrite(ledpin1,LOW);
  delay(1000);
  }
}
