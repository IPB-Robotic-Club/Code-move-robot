#include <AX12A.h>

#define DirectionPin   (10u)
#define BaudRate      (1000000ul)
#define ID        (2u)

int kaki_kiri1 = 1;
int kaki_kiri2 = 2;
int lutut_kiri = 3;
int paha_kiri1 = 4;
int paha_kiri2 = 5;
int pinggul_kiri = 6;
int pinggul_kanan = 7;
int paha_kanan2 = 8;
int paha_kanan1 = 9;
int lutut_kanan = 10;
int kaki_kanan2 = 11;
int kaki_kanan1 = 12;
int tangan_kanan = 13;
int tangan_kiri = 14;

void setup() {
  // put your setup code here, to run once:
  ax12a.begin(BaudRate, DirectionPin, &Serial);
  Serial.begin(1000000);
  delay(3000);
  //prepare position
  ax12a.moveSpeed(kaki_kanan1, 512, 150); 
  ax12a.moveSpeed(kaki_kiri1, 512, 150);
  delay(1000); 
  ax12a.moveSpeed(kaki_kanan2, 512, 150); 
  ax12a.moveSpeed(kaki_kiri2, 512,  150); 
  delay(1000);
  ax12a.moveSpeed(lutut_kanan, 512, 150); 
  ax12a.moveSpeed(lutut_kiri, 512, 150); 
  delay(1000);
  ax12a.moveSpeed(paha_kanan1, 512, 150); 
  ax12a.moveSpeed(paha_kiri1, 512, 150);
  delay(1000);
  ax12a.moveSpeed(paha_kanan2, 512, 150); 
  ax12a.moveSpeed(paha_kiri2, 512, 150); 
  delay(1000);
  ax12a.moveSpeed(pinggul_kanan, 365, 150); 
  ax12a.moveSpeed(pinggul_kiri, 365, 150); 
  delay(1000);

  ax12a.moveSpeed(tangan_kanan, 1000, 75); 
  ax12a.moveSpeed(tangan_kiri, 0, 75);
  delay(3000); 
  ax12a.moveSpeed(tangan_kanan, 512, 75); 
  ax12a.moveSpeed(tangan_kiri, 512, 75);
  delay(2000); 
  
}
void loop() { 
  ax12a.moveSpeed(paha_kiri2, 525, 75); 
  ax12a.moveSpeed(paha_kanan2, 525, 75); 
  ax12a.moveSpeed(kaki_kiri1, 525, 75); 
  ax12a.moveSpeed(kaki_kanan1, 525, 75);
  ax12a.moveSpeed(pinggul_kiri, 330, 75);
  ax12a.moveSpeed(pinggul_kanan, 330, 75);
  ax12a.moveSpeed(paha_kiri1, 400, 75);
  ax12a.moveSpeed(lutut_kiri, 600, 75);
  ax12a.moveSpeed(kaki_kiri1, 600, 75);

  ax12a.moveSpeed(tangan_kanan, 800, 75); 
  ax12a.moveSpeed(tangan_kiri, 800, 75);
  
  delay(2500);
  ax12a.moveSpeed(paha_kiri1, 512, 75); 
  ax12a.moveSpeed(lutut_kiri, 512, 75); 
  ax12a.moveSpeed(kaki_kiri2, 512, 75);
  ax12a.moveSpeed(kaki_kiri1, 512, 75);
  
  delay(1500);
  ax12a.moveSpeed(paha_kiri2, 480, 75); 
  ax12a.moveSpeed(paha_kanan2, 480, 75); 
  ax12a.moveSpeed(kaki_kiri1, 480, 75); 
  ax12a.moveSpeed(kaki_kanan1, 480, 75);
  ax12a.moveSpeed(kaki_kanan2, 480, 75);
  ax12a.moveSpeed(pinggul_kiri,  375, 75);
  ax12a.moveSpeed(pinggul_kanan, 375, 75);
  ax12a.moveSpeed(paha_kanan1, 600 , 75);
  ax12a.moveSpeed(lutut_kanan, 600, 75);
  ax12a.moveSpeed(kaki_kanan1, 400, 75);

  ax12a.moveSpeed(tangan_kanan, 200, 75); 
  ax12a.moveSpeed(tangan_kiri, 200, 75);
  
  delay(2500);
  ax12a.moveSpeed(paha_kanan1, 512, 75);
  ax12a.moveSpeed(lutut_kanan, 512, 75);
  ax12a.moveSpeed(kaki_kanan2, 512, 75);
  ax12a.moveSpeed(kaki_kanan1, 512, 75);
  delay(1500);
  
  // put your main code here, to run repeatedly:
  
}
