int T=100;
void setup() {
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(13,OUTPUT);
  digitalWrite(13,LOW);
}

void loop() {
 digitalWrite(12,HIGH); digitalWrite(11,LOW); digitalWrite(10,LOW); digitalWrite(9,LOW);
 delay(T);
 digitalWrite(11,HIGH); digitalWrite(12,LOW); digitalWrite(10,LOW); digitalWrite(9,LOW);
 delay(T);
  digitalWrite(10,HIGH); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(9,LOW);
 delay(T);
  digitalWrite(9,HIGH); digitalWrite(11,LOW); digitalWrite(10,LOW); digitalWrite(12,LOW);
 delay(T);
  digitalWrite(10,HIGH); digitalWrite(11,LOW); digitalWrite(12,LOW); digitalWrite(9,LOW);
 delay(T);
  digitalWrite(11,HIGH); digitalWrite(12,LOW); digitalWrite(10,LOW); digitalWrite(9,LOW);
 delay(T);
 
 T=T+100;

}
