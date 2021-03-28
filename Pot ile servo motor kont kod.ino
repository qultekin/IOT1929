#include <Servo.h>

#include <Joystick.h>
Servo Servoadimm;
Servo Servoadim;
 Joystick_ Joystick;
 int pot1=A0;
 int pot2=A1;
int deger;
int degerr;
int derece ; 
int derecee;


void setup() {
  Joystick.begin();
  Servoadim.attach(5);
Servoadimm.attach(6);
}

void loop() {


   deger=analogRead(pot1);
   derece=map(deger,0,1023,0,180);
   Servoadim.write(derece);



   
   degerr=analogRead(pot2);
   derecee=map(degerr,0,1023,0,90);
   Servoadimm.write(derecee);
}
