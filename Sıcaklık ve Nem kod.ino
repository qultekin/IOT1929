#include <dht.h>


dht sicaklik;

#define DHT11_PIN 6


void setup() {

Serial.begin(9600);
}

void loop() {

int okunandeger=sicaklik.read11(DHT11_PIN);

Serial.print("Sıcaklık: ");
Serial.print(sicaklik.temperature);
Serial.println(" C°");



Serial.print("Sıcaklık: ");
int K=sicaklik.temperature+273;
Serial.print(K);
Serial.println(" K°");

int F=1.80*sicaklik.temperature+32;
Serial.print("Sıcaklık: ");
Serial.print(F);
Serial.println(" F°");
Serial.print("Nem: ");
Serial.println(sicaklik.humidity);
delay(10000);



}
