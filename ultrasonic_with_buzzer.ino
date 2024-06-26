const int trigPin=12;
const int echoPin=11;
const int buzzerPin=9;

long duration;
int distance;
void setup() 
{
  pinMode(buzzerPin,OUTPUT);
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);  

}

void loop() 
{
  noTone(buzzerPin);
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);

   duration=pulseIn(echoPin,HIGH);
   distance=duration*0.034/2;

   Serial.print("Distance= ");
   Serial.print(distance);
   Serial.println("cm");
  
  if(distance>=30)
  {
    tone(buzzerPin,500);
  }
   delay(500);

}
