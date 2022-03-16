int a=0;
int b=1;
int c=2;
int d=3;
int e=4;
int f=5;
int g=6;

int first=8;
int second=9;
int third=10;
int fourth=11;

void setup() {
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);

  pinMode(first, OUTPUT);
  pinMode(second, OUTPUT);
  pinMode(third, OUTPUT);
  pinMode(fourth, OUTPUT);
}

void loop() {
digitalWrite(first, HIGH);
two();
  delay(1000);
  digitalWrite(first, LOW);
  
digitalWrite(second, HIGH);
  four();
  delay(1000);
  digitalWrite(second, LOW);

  digitalWrite(third, HIGH);
  seven();
  delay(1000);
  digitalWrite(third, LOW);
  
digitalWrite(fourth, HIGH);
  two();
  delay(1000);
  digitalWrite(fourth, LOW);
}
void two()
{
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
}

void four()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}

void seven()
{
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}
