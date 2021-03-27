
int ledler[]{2,3,4,5,6};



void setup() {

 for (int led=0; led<=4;led=led+1){
  
  
 pinMode(ledler[led],OUTPUT); 
  
  }

}

void loop() {
 
for (int led=0;led<=4;led=led+1){
  
  digitalWrite(ledler[led],HIGH);
  delay(500);

  }
for(int led=4;led>=0;led=led-1){

digitalWrite(ledler[led],LOW);
delay(500);


}



  
}
