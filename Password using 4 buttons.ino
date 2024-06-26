int button1=4;
int button2=5;
int button3=6;
int button4=7;
int led=8;
int buttonstate=0;

void setup() {
  pinMode(button1,INPUT);
  pinMode(button2,INPUT);
  pinMode(button3,INPUT);
  pinMode(button4,INPUT);
  pinMode(led,OUTPUT);
}

void loop() {
  digitalWrite(led,LOW);
  buttonstate=digitalRead(button1);
if (buttonstate==HIGH)
{
  buttonstate=digitalRead(button2);
  if(buttonstate==HIGH)
  {
    buttonstate=digitalRead(button3);
    if(buttonstate==LOW)
    {
      buttonstate=digitalRead(button4);
      if(buttonstate==LOW)
      {
        digitalWrite(led,HIGH);
      }
    }
  }
}
}
