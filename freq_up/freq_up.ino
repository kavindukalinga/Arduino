int f=50;
void setup() {
pinMode(13,OUTPUT);

}

void loop() {
tone(13,f,200); //pin,frequency,time
delay(1000);
f=f+50;

}
