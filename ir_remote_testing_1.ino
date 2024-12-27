#include <IRremote.h>
const int irsensor=2;
const unsigned long arr [21]={
4278238976,
4261527296,
4244815616,
4211392256,
4194680576,
4177968896,
4144545536,
4127833856,
4111122176,
4077698816,
4060987136,
4044275456,
4010852096,
3994140416,
3977428736,
3944005376,
3927293696,
3910582016,
3877158656,
3860446976,
3843735296
};
 String name[21]={
"Power", "VOL+", "FUNC/STOP", "PREV", "PLAY/PAUSE", "NEXT", "PREV", "VOL-", "NEXT", "0", "EQ", "ST/REPT", "1", "2", "3", "4", "5", "6", "7", "8", "9"
};
void setup()
{
  Serial.begin(9600);
  IrReceiver.begin(irsensor,ENABLE_LED_FEEDBACK);
}

void loop()
{
  if(IrReceiver.decode()){
 unsigned long i= IrReceiver.decodedIRData.decodedRawData;
    //Serial.println(i);
    for(int j=0;j<21;j++){
     if(i==arr[j]){
      Serial.print("you pressed ");
      Serial.print(name[j]);
      Serial.println();
       break;
      } 
    }
    delay(100);
    IrReceiver.resume();
  }
  delay(1000);
  }