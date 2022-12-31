int x=1;
void setup() {
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(13,OUTPUT);
  digitalWrite(13,LOW);
 Serial.begin(9600);
}

void loop() {
digitalWrite(10,HIGH); digitalWrite(11,LOW); digitalWrite(12,LOW);
Serial.println(x); Serial.println("GREEN"); delay(200);
 digitalWrite(10,HIGH); digitalWrite(11,HIGH); digitalWrite(12,LOW);
 Serial.println("LIGHT BLUE"); delay(200);
  digitalWrite(11,HIGH); digitalWrite(10,LOW); digitalWrite(12,LOW);
 Serial.println("BLUE"); delay(200);
 digitalWrite(10,HIGH); digitalWrite(11,LOW); digitalWrite(12,HIGH);
 Serial.println("LIGHT GREEN"); delay(200);
  digitalWrite(12,HIGH); digitalWrite(11,LOW); digitalWrite(10,LOW);
 Serial.println("RED"); delay(200);
 digitalWrite(10,LOW); digitalWrite(11,HIGH); digitalWrite(12,HIGH);
 Serial.println("PURPLE"); delay(200);
 digitalWrite(10,HIGH); digitalWrite(11,HIGH); digitalWrite(12,HIGH);
 Serial.println("WHITE"); delay(200);
 x++;

}
