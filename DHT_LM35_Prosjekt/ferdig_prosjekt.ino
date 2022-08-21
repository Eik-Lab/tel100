/*
This sketch shows an example of how to use a DHT11 sensor with an Arduino UNO, and a LM35 sensor.

LM35 sensor is conencted to PIN A1.
DHT11 is connected to D8.
*/

float scale_factor  = 10.0; // mV/*C
int pin = A1;

// Import dht library
#include <DHT.h>;

#define DHTPIN 8
#define DHTTYPE DHT11


DHT dht(DHTPIN, DHTTYPE);


void setup() {
  Serial.begin(9600);
  Serial.print("Starting program");
  dht.begin();
}

void loop() {

    // Read LM35DZ sensor and print values
  float temperatur = read_analog_sensor();
  Serial.print("Temp:");
  Serial.println(temperatur);
  // ------------------ end of LM35DZ code

  // Read DHT 11 sensor and print values
  read_and_print_digital_sensor_hum_temp();
}

// Function that reads the analog sensor from pin A1
float read_analog_sensor(){
  // LM35DZ Sensor code 
  float spenning_verdi = analogRead(pin);
  float milli_volt = (spenning_verdi / 1024.0) * 5000;
  float temperatur = milli_volt / scale_factor;
  return temperatur;
}

// Function that reads, and prints the humidity and temperature from a DHT11 sensor
void read_and_print_digital_sensor_hum_temp(){
  float hum = dht.readHumidity();
  float temp = dht.readTemperature();
  Serial.print("Digital Hum:");
  Serial.println(hum);
  Serial.print("Digital temp:");
  Serial.println(temp);
}
