const int tem_pin= A0;
void setup()
{
  Serial.begin(9600);
  pinMode(tem_pin,INPUT);
}

void loop()
{
  float sensor_value=analogRead(tem_pin);
  float voltage=sensor_value*5.0/1023;
  float celcius=voltage*100.0-50.0;
  float farenheit=((180.0/100.0)*celcius)+32;
  float kelvin = celcius+273;
  Serial.print(celcius);
  Serial.print("degree celcius ");
  Serial.print(farenheit);
  Serial.print("degree farenheit ");
  Serial.print(kelvin);
  Serial.print("kelvin ");
  delay(1000);
  Serial.println();
}
