#include <LiquidCrystal.h>
int seconds =0;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
byte customChar[] = {
  B00000,
  B01010,
  B00000,
  B00100,
  B10001,
  B01110,
  B00000,
  B00000
};
byte customChar1[] = {
  B00000,
  B01010,
  B00000,
  B00100,
  B00000,
  B01110,
  B10001,
  B00000
};
void setup(){
  Serial.begin(9600);
  lcd.begin(16,2);
  //lcd.print("hello man");
  lcd.createChar(0,customChar);
   lcd.createChar(1,customChar1);
}
void loop(){
 //lcd.print(seconds);
// seconds+=1;
 // delay(100);
  for(int i=0;i<2;i++){
   lcd.setCursor(0,0);
   lcd.write(i);
    delay(1000);
  }
}
