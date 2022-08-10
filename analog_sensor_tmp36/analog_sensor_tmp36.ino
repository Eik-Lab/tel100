void setup() {
  // Kode som kun skal kjøres en gang:
  Serial.begin(9600);

}

void loop() {
  // Kode som kjøres i loop
  // Analog sensor, bør kalibreres
  // TMP36
  // Variabler
  int val;
  int tempPin = A5;
  float kalibrering;
  float temp;

  // Leser av verdien
  val = analogRead(tempPin);
  // Regner ut temperaturen, basert på spenning (mV)
  float mv = ( val / 1024.0) * 5000;
  // Siden dette er en analog sensor bør den kalibreres
  kalibrering = 15;
  temp = mv / 10 - kalibrering;
  // Printer temp i konsollen
  Serial.print(temp);

  // Venter 5 sekunder før loopen gjentas
  delay(5);

}
