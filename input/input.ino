int x;
void setup() {
 Serial.begin(9600);
 pinMode(7,INPUT); pinMode(12,OUTPUT);
}

void loop() {
  x=digitalRead(7);
  Serial.println(x); digitalWrite(12,x);
  delay(1000);

}
