int run = 9;
int run1 = 10;
void setup() {
  // put your setup code here, to run once:
pinMode(run,OUTPUT);
pinMode(run1,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(run,HIGH);
digitalWrite(run1,LOW);
return 0;
}
