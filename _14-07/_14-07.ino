void setup() {
pinMode(13,OUTPUT);
}

void loop() {
blinks(13,1000);
blinks(13,200);blinks(13,200);
}
void blinks(int a,int t) {
  digitalWrite(a,HIGH);delay(t);
  digitalWrite(a,LOW);delay(t);
}

