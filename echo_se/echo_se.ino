# define trig 8
# define echo 7
void setup() {
  pinMode(trig,OUTPUT); pinMode(echo,INPUT);
  digitalWrite(trig,LOW);
  Serial.begin(9600);
}

void loop() {
  float d=dist();
  Serial.println(d); delay(1000);
}
float dist() {
  digitalWrite(trig,HIGH); delayMicroseconds(10);
  digitalWrite(trig,LOW);
  long int t=pulseIn(echo,HIGH);  //micro seconds
  return 0.017*t;
}

