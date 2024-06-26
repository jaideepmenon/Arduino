int tempSensorPin=A0;
int ledPin1=7;
int ledPin2=6;
int ledPin3=5;
float temperatureThreshold1=2.0;
float temperatureThreshold2=4.0;
float temperatureThreshold3=6.0;

void setup() 
{
  Serial.begin(9600);
  pinMode(ledPin1,OUTPUT);
  pinMode(ledPin2,OUTPUT);
  pinMode(ledPin3,OUTPUT);
  
}

void loop() 
{
  int sensorValue=analogRead(tempSensorPin);
  float temperature=sensorValue*(3.0/1023.0)*10;

  Serial.print("Temperature : ");
  Serial.print(temperature);
  Serial.println ("degree");

  if(temperature>temperatureThreshold1)
  {
    digitalWrite(ledPin1,HIGH);
  }
  else
  {
   digitalWrite(ledPin1,LOW); 
  }  
  if(temperature>temperatureThreshold2)
  {
    digitalWrite(ledPin2,HIGH);
    
  }
  else
  {
    digitalWrite(ledPin2,LOW);
  }
   if(temperature>temperatureThreshold3)
  {
    digitalWrite(ledPin3,HIGH);
     
  }
  else
  {
   digitalWrite(ledPin3,LOW); 
  }  
  delay(1000);
}