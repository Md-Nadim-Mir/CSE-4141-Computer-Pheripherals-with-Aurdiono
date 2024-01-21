
int red = 2;
int yellow = 3;
int green = 4;




void setup() {

  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);

  

}

void loop() {
  // put your main code here, to run repeatedly:

  // red for 10s 
  digitalWrite(red,1);
  digitalWrite(yellow,0);
  digitalWrite(green,0);
  delay(1000);


  // yellow for 10s 
  digitalWrite(red,0);
  digitalWrite(yellow,1);
  digitalWrite(green,0);
  delay(1000);


   // green for 10s 
  digitalWrite(red,0);
  digitalWrite(yellow,0);
  digitalWrite(green,1);
  delay(1000);




}
