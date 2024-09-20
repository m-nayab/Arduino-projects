int led_red=12;
int led_blue=10;
int led_green=9;
void setup()
{
  Serial.begin(9600);
  digitalWrite(led_red,OUTPUT);
  digitalWrite(led_blue,OUTPUT);
  digitalWrite(led_green,OUTPUT);
}
void loop()
{ String n="";
  while(n==""){
   n=Serial.readString();
  }
 n.trim();
 if(n=="R" || n=="r"){
 analogWrite(led_red,225);
 analogWrite(led_green,0);
 analogWrite(led_blue,0);}
 else if (n=="G" || n=="g"){
 analogWrite(led_red,0);
 analogWrite(led_green,225);
 analogWrite(led_blue,0);
 }else
 {analogWrite(led_red,0);
 analogWrite(led_green,0);
 analogWrite(led_blue,225);
}
 Serial.println(n);
 /* rbg_led(50,50,50);}
void rbg_led(int r,int b,int g){
   analogWrite(led_red,r);
   analogWrite(led_blue,b);
   analogWrite(led_green,g);*/
}
