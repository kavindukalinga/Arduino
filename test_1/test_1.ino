int x=0;
int fadeAmount=5;
void setup() {
 pinMode(13,OUTPUT);
  digitalWrite(13,LOW);
}

void loop() {
 analogWrite(11,x); delay(50);
 x=x+fadeAmount;
 if (x==255||x==0) {fadeAmount=-fadeAmount;}  


}
