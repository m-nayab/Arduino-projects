const int trig_pin=4;
const int echo_pin=3;
long value=0;
int cm=0;
const int led_pin=12;
void setup()
{
  Serial.begin(9600);
  pinMode(trig_pin,OUTPUT);
  pinMode(led_pin,OUTPUT);
  pinMode(echo_pin,INPUT);
  digitalWrite(trig_pin,LOW);
}

void loop()
{
  digitalWrite(trig_pin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_pin,LOW);
  value = pulseIn(echo_pin,HIGH);
  cm = value/58;
  analogWrite(led_pin,cm);
  Serial.print(value);
  Serial.print(" : ");
  Serial.print(cm);
  Serial.println();
  delay(200);
}
