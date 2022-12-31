void setup() {
  Serial.begin(9600);
  Serial.println(area(1));
  Serial.println(area(10));
  Serial.println(area(10)-area(5));
  Serial.println(0.75*area(10)+area(5)*0.5);

}

void loop(){}
float area(float r) {
  return 3.14*r*r;
}
