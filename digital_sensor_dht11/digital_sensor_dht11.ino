
#include <EduIntro.h>

DHT11 dht11(D7);

void setup() {
  // Kode som kun skal kjøres en gang:
  Serial.begin(9600);

}

void loop() {
  // Kode som kjøres i loop
  // Digital sensor, må inkludere bibliotek (<EduIntro.h>)
  // DHT11

  // Variabler
  float humid;
  
  dht11.update();
  humid = dht11.readHumidity();
  Serial.print(humid);

  // Venter 5 sekunder før loopen gjentas
  delay(5);

}
