int t,T=0;
int LED=LOW;
void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {
  t=millis();
  digitalWrite(13,LED);
  if (t-T>=5000) {LED=~LED; T=t;}
  Serial.println(t);
  delay(1000);
}
