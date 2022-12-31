# define a 7
# define b 8
# define c 9
# define d 10
# define e 11
# define f 12
# define g 13
int pin;
void setup() {
  for (pin=a;pin<=g;pin++) pinMode(pin,OUTPUT);
  /*    a ___
   *    g|_f_|b    ssd
   *    e|___|c
   *       d
   */

}

void loop() {
//zero
for (pin=a;pin<=g;pin++) digitalWrite(pin,HIGH);
digitalWrite(f,LOW); delay(2000);
//one
for (pin=a;pin<=g;pin++) digitalWrite(pin,LOW);
digitalWrite(b,HIGH);digitalWrite(c,HIGH); delay(2000);
//two
for (pin=a;pin<=g;pin++) digitalWrite(pin,HIGH);
digitalWrite(g,LOW);digitalWrite(c,LOW); delay(2000);
//three
for (pin=a;pin<=g;pin++) digitalWrite(pin,HIGH);
digitalWrite(g,LOW);digitalWrite(e,LOW); delay(2000);
//four
for (pin=a;pin<=g;pin++) digitalWrite(pin,HIGH);
digitalWrite(a,LOW);digitalWrite(e,LOW);digitalWrite(d,LOW); delay(2000);
//five
for (pin=a;pin<=g;pin++) digitalWrite(pin,HIGH);
digitalWrite(e,LOW);digitalWrite(b,LOW); delay(2000);
//six
for (pin=a;pin<=g;pin++) digitalWrite(pin,HIGH);
digitalWrite(b,LOW); delay(2000);
//seven
for (pin=a;pin<=g;pin++) digitalWrite(pin,LOW);
digitalWrite(a,HIGH);digitalWrite(c,HIGH);digitalWrite(b,HIGH); delay(2000);
//eight
for (pin=a;pin<=g;pin++) digitalWrite(pin,HIGH);
 delay(2000);
 //nine
for (pin=a;pin<=g;pin++) digitalWrite(pin,HIGH);
digitalWrite(e,LOW); delay(2000);


}
