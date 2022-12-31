float x,y;
void setup() {
 pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  x=analogRead(0);
  y=x*5/1023;
  Serial.println(y);
  if (y<2) { digitalWrite(13,LOW);}
  else { digitalWrite(13,HIGH);}
  delay(1000);
}
