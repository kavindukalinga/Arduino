void setup() {
  pinMode(4,OUTPUT);pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);pinMode(7,OUTPUT);
  //set motors to off
  digitalWrite(4,LOW);digitalWrite(5,LOW);
  digitalWrite(6,LOW);digitalWrite(7,LOW);
  //forward
  digitalWrite(4,HIGH);digitalWrite(6,HIGH);
  delay(2000); //forward
  digitalWrite(4,LOW);digitalWrite(6,LOW);delay(3000);
  //reverse
  digitalWrite(5,HIGH);digitalWrite(7,HIGH);delay(2000);
  digitalWrite(5,LOW);digitalWrite(7,LOW);delay(3000);

  digitalWrite(4,HIGH);digitalWrite(7,HIGH);delay(1000);
  //left
  digitalWrite(4,LOW);digitalWrite(7,LOW);delay(3000);
  digitalWrite(5,HIGH);digitalWrite(6,HIGH);delay(1000);
  //right
  digitalWrite(5,LOW);digitalWrite(6,LOW);  
}

void loop() {
  
}
