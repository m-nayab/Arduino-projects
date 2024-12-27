const int pwmpin1=5;
const int pwmpin2=3;
const int pin1=1;
const int pin2=2;
const int pot=8;
void setup()
{  Serial.begin(9600);
   pinMode(pwmpin1, INPUT);
   pinMode(pwmpin2, INPUT);
   pinMode(pin1, OUTPUT);
   pinMode(pin2, OUTPUT);
   pinMode(pot,INPUT);
  
}

void loop()
{  int potval=analogRead(pot);
  int speedval=map(potval,0,1023,-255,255);
 Serial.println(speedval);
 if(speedval>0){
 digitalWrite(pin1,0);
  analogWrite(pwmpin1,speedval);
   delay(1000);
 }
 else if(speedval<0){
 digitalWrite(pin1,1);
  analogWrite(pwmpin1,speedval);
   delay(1000);
 }
 else{
  digitalWrite(pin1,0);
  analogWrite(pwmpin1,0);
   delay(1000);}
 
  //digitalWrite(pin1,1);
  //delay(1000); // Wait for 1000 millisecond(s)
  //digitalWrite(LED_BUILTIN, LOW);
  //delay(1000); // Wait for 1000 millisecond(s)
}