int arr[6]={13,12,11,10,9,8};
void setup() {
  for(int i=0;i<=5;i++){
  pinMode(arr[i],OUTPUT);
  }
}
void loop(){
  for(int i=0;i<64;i++){
    /*
    if((i%2)>0){digitalWrite(arr[5],HIGH);}else{digitalWrite(arr[5],LOW);}
    
    if((i%4)>1){digitalWrite(arr[4],HIGH);}else{digitalWrite(arr[4],LOW);}
     
    if((i%8)>3){digitalWrite(arr[3],HIGH);}else{digitalWrite(arr[3],LOW);}
     
    if((i%16)>7){digitalWrite(arr[2],HIGH);}else{digitalWrite(arr[2],LOW);}
     
    if((i%32)>15){digitalWrite(arr[1],HIGH);}else{digitalWrite(arr[1],LOW);}
     
     if((i%64)>32){digitalWrite(arr[0],HIGH);}else{digitalWrite(arr[0],LOW);}

    delay(1000);*/

    digitalWrite(arr[5],i%2 >0);
    digitalWrite(arr[4],i%4 >1);
    digitalWrite(arr[3],i%8 >3);
    digitalWrite(arr[2],i%16 >7);
    digitalWrite(arr[1],i%32 >15);
    digitalWrite(arr[0],i%64 >32);
  delay(300);
  }
} 
