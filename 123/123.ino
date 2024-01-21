int a=2;
int b= 3;
int c =4;
int d= 5;
int e = 6;
int f= 7;
int g = 8;
int dp =9 ;





void setup() {
  // put your setup code here, to run once:

  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(dp,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  // 0
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,0);
  digitalWrite(dp,1);
  delay(1000);

  // 1
  digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);
  digitalWrite(dp,1);
  delay(1000);

    // 2
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,0);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,0);
  digitalWrite(g,1);
  digitalWrite(dp,1);
  delay(1000);



   // 9
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,0);
  digitalWrite(f,1);
  digitalWrite(g,1);
  digitalWrite(dp,1);
  delay(1000);

}
