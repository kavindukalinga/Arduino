int x,y;
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
 x=analogRead(0);         //0-1023
 y=map(x,0,1023,0,255);   //y=x/1023*255
 analogWrite(11,y);       //0-255
 Serial.print(x); Serial.print(" "); Serial.println(y);
 delay(200);
}
