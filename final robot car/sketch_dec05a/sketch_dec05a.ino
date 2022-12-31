# define IN1 4
# define IN2 5
# define IN3 6
# define IN4 7
void setup() {
  pinMode(IN1,OUTPUT);pinMode(IN2,OUTPUT);pinMode(IN3,OUTPUT);pinMode(IN4,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  if (Serial.available()>0){
    char data=Serial.read();
    if (data=='1') fd();
    else if (data=='2') bw();
    else if (data=='3') right();
    else if (data=='4') left();
  }
}
void fd(){
  digitalWrite(IN1,HIGH);digitalWrite(IN3,HIGH); delay(100); 
  digitalWrite(IN1,LOW);digitalWrite(IN3,LOW);
}

void bw(){
  digitalWrite(IN2,HIGH);digitalWrite(IN4,HIGH); delay(100); 
  digitalWrite(IN2,LOW);digitalWrite(IN4,LOW);
}

void right(){
  digitalWrite(IN2,HIGH);digitalWrite(IN3,HIGH); delay(100); 
  digitalWrite(IN2,LOW);digitalWrite(IN3,LOW);
}

void left(){
  digitalWrite(IN1,HIGH);digitalWrite(IN4,HIGH); delay(100); 
  digitalWrite(IN1,LOW);digitalWrite(IN4,LOW);
}

