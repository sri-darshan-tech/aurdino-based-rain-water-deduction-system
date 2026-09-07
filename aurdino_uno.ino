#include<Servo.h>
Servo myServo;

void setup()
{
    pinMode(9,OUTPUT); //BUZZER IN PIN 9
    pinMode(10,OUTPUT); // LED IN PIN 10
    myServo.attach(8);
}
void loop()
{
    int sensor_value=analogRead(A3);
    
    if(sensor_value<300)
    {
        digitalWrite(10,HIGH); // LED ON
        myServo.write(90); // SERVO MOTOR ROTATES 90°

        digitalWrite(9,HIGH); // BUZZER BEEPS
        delay(500);

        digitalWrite(9,LOW); // BUZZER OFF
        delay(500);

     }
     else
     {
         digitalWrite(9,LOW);
         digitalWrite(10,LOW);
         myServo.write(0);
      }
      
      
}