void setup() {
  // put your setup code here, to run once:
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(12,1);
digitalWrite(11,0);
digitalWrite(10,1);
digitalWrite(9,0);
delay(1000);
digitalWrite(12,0);
digitalWrite(11,1);
digitalWrite(10,0);
digitalWrite(9,1);
delay(1000);
}
