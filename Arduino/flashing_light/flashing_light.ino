int ledPin = 9;

void setup() {}

void loop()
{
  for (int i=0; i<=12; i++)
  {
    analogWrite(ledPin, i);
    delay(250);
  }
  for (int i=12; i>=0; i--)
  {
    analogWrite(ledPin, i);
    delay(250);
  }
}

