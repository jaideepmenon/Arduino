#include <Ultrasonic.h>
Ultrasonic us(12,11);
int distance;
void setup() 
{
  Serial.begin(9600);

}

void loop()
{

distance=us.read();
Serial.print("distance in cm:");
Serial.println(distance);
delay(1000);
}
