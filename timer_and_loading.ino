int segment_pins[8]={7,6,4,2,1,9,10,5};
int pattern[10][8]={
  {1,1,1,1,1,1,0,0},
  {0,1,1,0,0,0,0,0},
  {1,1,0,1,1,0,1,0},
  {1,1,1,1,0,0,1,0},//for timer//
  {0,1,1,0,0,1,1,0},
  {1,0,1,1,0,1,1,0},
  {1,0,1,1,1,1,1,0},
  {1,1,1,0,0,0,0,0},
  {1,1,1,1,1,1,1,0},
  {1,1,1,1,0,1,1,0}
};
//int pattern[8]= {1,1,1,1,1,1,1,0};
/*int pattern[8][8]={
   {1,0,0,0,0,0,0,0},
   {0,1,0,0,0,0,0,0},
   {0,0,0,0,0,0,1,0},//for loading//
   {0,0,0,0,1,0,0,0},
   {0,0,0,1,0,0,0,0},
   {0,0,1,0,0,0,0,0},
   {0,0,0,0,0,0,1,0},
   {0,0,0,0,0,1,0,0}
};*/
void setup()
{
  for(int i=0;i<10;i++)//i<10 for timer//
  {
  pinMode(segment_pins[i], OUTPUT);
  }
}

void loop()
{
  //for loading
 /*for(int i=0;i<8;i++){
  digitalWrite(segment_pins[i], HIGH);
  delay(200); 
  digitalWrite(segment_pins[i], LOW);
  delay(200); 
  }*/
  for(int i=0;i<10;i++)
  {
    for(int j=0;j<8;j++){
     int check=pattern[i][j];
     digitalWrite(segment_pins[j],check);
    // delay(100);
    }
    delay(200);
  }
 
}
