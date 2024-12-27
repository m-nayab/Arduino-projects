#include <Servo.h>
Servo serv;
const int pot= A0;
void setup(){
  Serial.begin(9600);
 int servopin =9;
 pinMode(pot,INPUT);
serv.attach(servopin);
}
void loop(){
 int potval=analogRead(pot);
  int angle =map(potval,0,1023,0,180);
  Serial.println(angle);
serv.write(angle);
  delay(50);
}