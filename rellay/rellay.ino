# define IN1 7
# define IN2 8
void setup() {
  pinMode(IN1,OUTPUT);pinMode(IN2,OUTPUT);
  digitalWrite(IN1,HIGH);digitalWrite(IN2,LOW);delay(2000);
  digitalWrite(IN1,LOW);digitalWrite(IN2,LOW);delay(5000);
  digitalWrite(IN1,LOW);digitalWrite(IN2,HIGH);delay(2000);
  digitalWrite(IN1,LOW);digitalWrite(IN2,LOW);

}

void loop() {


}
