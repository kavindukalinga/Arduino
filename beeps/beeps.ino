void setup() {
  pinMode(11,OUTPUT);
  beeps(11,10,100);
  beeps(11,2,1000);
  beeps(11,20,50);
}

void loop() {}
void beeps(int pin,int n,int t) {
  for (int x=1;x<=n;x++){
    digitalWrite(pin,HIGH); delay(t);
    digitalWrite(pin,LOW); delay(t);
  }
}

