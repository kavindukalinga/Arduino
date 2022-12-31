int i;
int x=13;
void setup() {
pinMode(x,OUTPUT);
for(i=10;i>0;i--){
  digitalWrite(13,HIGH); delay(100);
  digitalWrite(13,LOW); delay(100);
}
}

void loop() {


}
