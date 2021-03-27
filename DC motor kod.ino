 

const int DC=3;
const int pot=A0;
int led=4;
int motor;


void setup() {

pinMode(led,OUTPUT);
  pinMode(DC,OUTPUT);
  Serial.begin(9600);
}

void loop() {

motor=analogRead(pot);
motor=map(motor,0,1023,0,255);
analogWrite(DC,motor);
Serial.println(motor);
if(motor>=(0,512,0,127))
{
  
  digitalWrite(led,HIGH);
   }
else{
  
  digitalWrite(led,LOW);
  
  
  }

  

}
