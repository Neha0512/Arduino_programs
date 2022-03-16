int mtr=4;
void setup() {
  pinMode(mtr,OUTPUT);

}

void loop() {
digitalWrite(mtr,HIGH);
delay(1000);
digitalWrite(mtr,LOW);
delay(1000);

}
