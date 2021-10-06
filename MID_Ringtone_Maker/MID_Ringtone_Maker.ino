int btn1=2;
int btn2=3;
int btn3=4;
int btn4=5;
int btn5=6;
int btn6=7;
int btn7=8;
int btn8=9;
int autoRing=12;
int tonePin=13;
int led=11;


void setup() {
  // put your setup code here, to run once:
  pinMode(btn1,INPUT);
  pinMode(btn2,INPUT);
  pinMode(btn3,INPUT);
  pinMode(btn4,INPUT);
  pinMode(btn5,INPUT);
  pinMode(btn6,INPUT);
  pinMode(btn7,INPUT);
  pinMode(btn8,INPUT);
  pinMode(led,OUTPUT);
  pinMode(autoRing,INPUT);
  pinMode(tonePin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int b1=digitalRead(btn1);
  int b2=digitalRead(btn2);
  int b3=digitalRead(btn3);
  int b4=digitalRead(btn4);
  int b5=digitalRead(btn5);
  int b6=digitalRead(btn6);
  int b7=digitalRead(btn7);
  int b8=digitalRead(btn8);
//  int autoR=digitalRead(autoRing);


  if (b1==1){
     Despacito();
//    tone(tonePin,300,150);
  }
    if (b2==1){
      tone(tonePin,400,150);
  }
      if (b3==1){
    tone(tonePin,500,150);
  }
      if (b4==1){
    tone(tonePin,600,150);
  }
      if (b5==1){
    tone(tonePin,700,150);
  }
      if (b6==1){
    tone(tonePin,800,150);
  }
      if (b7==1){
    tone(tonePin,900,150);
  }
      if (b8==1){
    tone(tonePin,1000,150);
  }
  delay(10); 
}

//Fuction Of RingTone
void Despacito(){
//  digitalWrite(12,OUTPUT);
  tone(tonePin, 587, 709.720327982);
  delay(788.578142202);
  digitalWrite(led, HIGH);
  delay(10.3082110092);
  tone(tonePin, 554, 709.720327982);
  delay(788.578142202);
  digitalWrite(led, LOW);
  delay(5.15410550459);
  tone(tonePin, 493, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  digitalWrite(led, HIGH);
  tone(tonePin, 369, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  tone(tonePin, 369, 134.52215367);
  delay(149.469059633);
  digitalWrite(led, LOW);
  delay(5.15410550459);
  tone(tonePin, 369, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 369, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 369, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 369, 134.52215367);
  delay(149.469059633);
  digitalWrite(led, HIGH);
  delay(5.15410550459);
  tone(tonePin, 493, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 493, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  digitalWrite(led, LOW);
  tone(tonePin, 493, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  digitalWrite(led, HIGH);
  tone(tonePin, 493, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  tone(tonePin, 440, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 493, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  digitalWrite(led, LOW);
  tone(tonePin, 391, 412.843850917);
  delay(458.715389908);
  delay(5.15410550459);
  digitalWrite(led, HIGH);
  tone(tonePin, 391, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 391, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  digitalWrite(led, LOW);
  tone(tonePin, 391, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 391, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 391, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 493, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  digitalWrite(led, HIGH);
  tone(tonePin, 493, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 493, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 493, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  digitalWrite(led, LOW);
  tone(tonePin, 554, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  digitalWrite(led, HIGH);
  tone(tonePin, 440, 412.843850917);
  delay(458.715389908);
  delay(5.15410550459);
  tone(tonePin, 440, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 440, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 440, 134.52215367);
  delay(149.469059633);
  digitalWrite(led, LOW);
  delay(5.15410550459);
  tone(tonePin, 440, 41.7482545872);
  delay(46.3869495413);
  delay(36.0787385321);
  tone(tonePin, 440, 37.109559633);
  delay(41.2328440367);
  digitalWrite(led, HIGH);
  delay(30.9246330275);
  tone(tonePin, 440, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 587, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  digitalWrite(led, LOW);
  tone(tonePin, 587, 46.3869495413);
  delay(51.5410550459);
  delay(30.9246330275);
  tone(tonePin, 587, 46.3869495413);
  delay(51.5410550459);
  delay(20.6164220183);
  tone(tonePin, 587, 273.683002294);
  delay(304.092224771);
  digitalWrite(led, HIGH);
   delay(5.15410550459);
  tone(tonePin, 659, 134.52215367);
  delay(149.469059633);
  delay(5.15410550459);
  tone(tonePin, 659, 273.683002294);
  delay(304.092224771);
  delay(5.15410550459);
  digitalWrite(led, LOW);
  tone(tonePin, 554, 691.165548165);
  delay(767.961720183);
  delay(314.40043578);
  }
