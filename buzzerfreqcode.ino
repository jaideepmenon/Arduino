int buzzerPin=9;

void setup()
{
  pinMode(buzzerPin,OUTPUT);
}

void loop() 
{
  tone(buzzerPin,100);
  delay(500);
  noTone(buzzerPin);
  delay(500);

  tone(buzzerPin,1000);
  delay(500);
  noTone(buzzerPin);
  delay(500);

  tone(buzzerPin,2000);
  delay(500);
  noTone(buzzerPin);
  delay(500);
}
