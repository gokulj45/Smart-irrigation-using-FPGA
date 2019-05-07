void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
}
void loop()
{
  delay(10000);
  digitalWrite(2,HIGH);
  delay(200);
  digitalWrite(3,HIGH);
  delay(4800);
  digitalWrite(2,LOW);
  delay(200);
  digitalWrite(3,LOW);
}

