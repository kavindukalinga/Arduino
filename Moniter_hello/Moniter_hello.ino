int x=1;
void setup() {
Serial.begin(9600);

}

void loop() {
  Serial.print(x);
  Serial.println(" Hello Computer :-)");
 delay(500);
 x++; //x=x+1

}
