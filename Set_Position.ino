
#include <AX12A.h>
#define DirectionPin   (10u)
#define BaudRate      (1000000ul)
#define ID        (2u)


void setup() {
  // put your setup code here, to run once:
  ax12a.begin(BaudRate, DirectionPin, &Serial);
  Serial.begin(1000000);
  delay(1000);
  ax12a.move(1, 512);   
  delay(1000);
  ax12a.move(1, 0); 
}
void loop()
{
  delay(1000);
  ax12a.move(1, 512); 
  delay(1000);
  ax12a.move(1, 0); 
}
