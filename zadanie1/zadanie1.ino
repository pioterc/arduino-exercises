#include <EEPROM.h> //library initialization

//define a car class
class car
  {
    public :
    String brand;
    int maxspeed;
    int acc;
    String color;   
  };
  
void setup() {

Serial.begin(9600);

//make an object "c1"
  car c1;
  c1.brand = "audi";
  c1.maxspeed = 260;
  c1.acc = 10;
  c1.color = "green";

//make an object "c2"  
  car c2;
  c2.color= "blue";
  c2.maxspeed = 300;
  c2.acc = 15;
  c2.brand = "bwm";
 

//putting two objects into a eeprom memory
  EEPROM.put(0, c1);
  EEPROM.put(1, c2);
Serial.println("Saved to EEPROM");

}


void loop() {
  

}
