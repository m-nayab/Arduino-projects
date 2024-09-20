const int ldr=A0;
const int led=3;
void setup()
{
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop()
{
  int sensor=analogRead(ldr);
  Serial.println(analogRead(ldr));
 // delay(300);
  if(sensor>=750){
    digitalWrite(led,LOW);
    delay(300);
  }
  else{
  digitalWrite(led,HIGH);
   delay(300);
  }
}
