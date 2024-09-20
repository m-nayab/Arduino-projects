const int pin =A0;
const int led=5;
void setup(){
Serial.begin(9600);
pinMode(pin,INPUT);
 pinMode(led,OUTPUT);
}
void loop(){
 int sensor_value=analogRead(pin);
 float voltage=sensor_value*(5.0/1023.0);
  if( voltage<=5 && voltage>4){
    digitalWrite(led,HIGH);
    delay(200);
     digitalWrite(led,LOW);
    delay(200);
  }
  else if(voltage<=4 && voltage>3){
     digitalWrite(led,HIGH);
    delay(500);
     digitalWrite(led,LOW);
    delay(500);
  }
  else if(voltage<=3 && voltage>2){
    digitalWrite(led,HIGH);
    delay(1000);
     digitalWrite(led,LOW);
    delay(1000);
  }
  else if(voltage<=2 && voltage>1){
  digitalWrite(led,HIGH);
    delay(2000);
     digitalWrite(led,LOW);
    delay(2000);
  }
  else{
     digitalWrite(led,HIGH);
    delay(3000);
     digitalWrite(led,LOW);
    delay(3000);
  }
 Serial.println(sensor_value);
  }
