#include <P1AM.h>

int const on = 150;
int const off = 1000;
int const lock = 1000;
int const wait = 6000;
int count = 0;


void setup(){ // the setup routine runs once:

  Serial.begin(115200);  //initialize serial communication at 115200 bits per second 
  while (!P1.init()){ 
    ; //Wait for Modules to Sign on   
  }
}

void loop(){  // the loop routine runs over and over again forever:

  P1.writeDiscrete(HIGH,1,2);  //Turn slot 1 channel 2 on
  delay(on);  //wait 1 second
  P1.writeDiscrete(LOW,1,2);   //Turn slot 1 channel 2 off
  delay(off);  //wait 1 second

  P1.writeDiscrete(HIGH,1,3);  //Turn slot 1 channel 2 on
  delay(on);  //wait 1 second
  P1.writeDiscrete(LOW,1,3);   //Turn slot 1 channel 2 off
  delay(off);  //wait 1 second

  P1.writeDiscrete(HIGH,1,2);  //Turn slot 1 channel 2 on
  delay(on);  //wait 1 second
  P1.writeDiscrete(LOW,1,2);   //Turn slot 1 channel 2 off
  delay(off);  //wait 1 second

  P1.writeDiscrete(HIGH,1,3);  //Turn slot 1 channel 2 on
  delay(on);  //wait 1 second
  P1.writeDiscrete(LOW,1,3);   //Turn slot 1 channel 2 off
  delay(off);  //wait 1 second

  P1.writeDiscrete(HIGH,1,1);  //Turn slot 1 channel 2 on
  delay(on);  //wait 1 second
  P1.writeDiscrete(LOW,1,1);   //Turn slot 1 channel 2 off
  delay(wait);  //wait 1 second

  P1.writeDiscrete(HIGH,1,2);  //Turn slot 1 channel 2 on
  delay(lock);  //wait 1 second
  P1.writeDiscrete(LOW,1,2);   //Turn slot 1 channel 2 off
  delay(wait);  //wait 1 second

  count = count + 1;
  Serial.println(count);
}
