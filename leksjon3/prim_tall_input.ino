/*
Kode for å skrive inn tall til seriell og vurdere om det er primtall eller ikke.
Skriv inn et heltall og trykk ctrl+enter for å sende
*/
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.setTimeout(10000); //Seriell venter 10 sek før den timer ut og sender data (for Serial.readStringUntil)
}

void loop() {
  int number = Serial.readStringUntil('\n').toInt(); // Leser input string fra seriell og gjør om til int
  check_prime(number);

delay(1000);

}

void check_prime(int num) {
  int limit = int(sqrt(num));
  bool check = false; 
  // Sjekker om tall fra 2 til sqrt(num) er en faktor i tallet. Tallet er et primtall dersom ingen av tallene [2, sqrt(num)] er en faktor av num
  for (int i = 2; i <= limit; i++){

    if (num % i == 0) {
      check = true;
      break;
    }
  }
  if (check) {
    Serial.print(num);
    Serial.println(": Ikke et primtall");
  }
else {
    Serial.print(num);
    Serial.println(": primtall");
  }
}
