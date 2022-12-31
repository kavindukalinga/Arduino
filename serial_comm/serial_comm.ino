void setup() {
  Serial.begin(9600);pinMode(13,OUTPUT);
  Serial.println("Serial communication is Started");
}

void loop() {
  if (Serial.available()>0) {
    char a=Serial.read();
    if (a=='H'){
      digitalWrite(13,HIGH);delay(1000);
      digitalWrite(13,LOW);delay(1000);
      Serial.write(a);
    }
    delay(1000);
  }

}
