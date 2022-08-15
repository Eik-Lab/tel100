// Løsningsforslag for oppgave 4-6 fra forelesningen. Funksjoner ligger under for løkken
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  print_range(100, 4);
  print_hello(5);
  print_word(20, "Tel 100 er best");
}

void loop() {
  // put your main code here, to run repeatedly:

}

//Oppgave 4
void print_range(int num, int jump){
  for (int i =0; i <=num; i += jump){
    Serial.println(i);
  }
}
//Oppgave 5
void print_hello(int num){
  for (int i=0; i < num; i++){
    Serial.println("Hello");
  }
}

// Oppgave 6
void print_word(int n, String word){
for (int i = 0; i < n; i++) {
  Serial.println(word);
}
}
