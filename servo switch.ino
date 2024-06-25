#include<Servo.h>
Servo myservo;

int buttonPin=2;
int buttonState=0;
void setup() {
  myservo.attach(9);
  pinMode(buttonPin, INPUT);
}

void loop() {
   buttonState = digitalRead(buttonPin);
  if(buttonState==HIGH){
     myservo.write(0);
 delay(1000);
 
myservo.write(90);
delay(100);

myservo.write(180);
delay(1000);
    }
  else{
    myservo.write(0);
    }
}