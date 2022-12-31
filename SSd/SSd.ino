int pin;
void setup() {
for (pin=7;pin<=13;pin++) pinMode(pin,OUTPUT);
for (pin=7;pin<=13;pin++) {
  digitalWrite(pin,HIGH); delay(1000);
}

for (pin=13;pin>=7;pin--) {
  digitalWrite(pin,LOW); delay(1000);
}
}

void loop() {
  // put your main code here, to run repeatedly:

}
