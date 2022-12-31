int i;
int x=13;
int t=1000;
void setup() {
pinMode(x,OUTPUT);
}

void loop() {
digitalWrite(13,HIGH); delay(t);
digitalWrite(13,LOW); delay(t);
t=t-50;
}
