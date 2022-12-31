int n=5;
void setup() {
  pinMode(13,OUTPUT); Serial.begin(9600);
  Serial.println(add(12,13));
  Serial.println(add(14,mul(12,13)));//12*13+14
  Serial.println(mul(14,add(12,13)));//(12+13)*14
  Serial.println(add(14,add(12,13)));//12+13+14
  Serial.println(add(mul(12,12),mul(5,5)));//(12+13)*14

}

void loop() {
  }
int add(int a,int b) {
  return a+b;
}
int mul(int a,int b) {
  return a*b;
}
