const int sensor_pin=3;
const int ledpin=12;
void setup()
{
  Serial.begin(9600);
  pinMode(sensor_pin,INPUT);
  pinMode(ledpin,OUTPUT);
}

void loop()
{
 int sensor_value=digitalRead(sensor_pin);
  Serial.println(sensor_value);
  digitalWrite(ledpin,sensor_value);
  delay(300);
}
