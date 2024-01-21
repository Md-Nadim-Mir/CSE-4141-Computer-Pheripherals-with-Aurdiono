#include <LedControl.h>

int DIN =2;
int CS=5;
int CLK= 9; 


LedControl lc= LedControl (DIN,CLK,CS,0);


void setup() {
  // put your setup code here, to run once:

  lc.shutdown(0,false); // power saving mode on stratup
  lc.setIntensity(0,15); // brightness
  lc.clearDisplay(0);   ////clear display

}

void loop() {
  // put your main code here, to run repeatedly:

  // define F

  // lc.setRow(0,0,B00000000); // row 1
  // lc.setRow(0,1,B00111100); // row 2
  // lc.setRow(0,2,B00100000); // row 3
  // lc.setRow(0,3,B00111100); // row 4
  // lc.setRow(0,4,B00100000); // row 5
  // lc.setRow(0,5,B00100000); // row 6
  // lc.setRow(0,6,B00100000); // row 7
  // lc.setRow(0,7,B00000000); // row 8

  //  rowwise sob jalabo

    // for( int col=0;col<8;col++){

    //   lc.setRow(0,col,B11111111); //turn on all led 
    //   delay(2000); 
    //   lc.setRow(0,col,B00000000); // turn off

       
    // }


    //  column wise sob jalabo

    for( int col=0;col<8;col++){

      lc.setColumn(0,col,B11111111); //turn on all led 
      delay(2000); 
      lc.setColumn(0,col,B00000000); // turn off

       
    }

}
