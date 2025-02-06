const int pinSensor = A0; // Pin analógico conectado al pin 'S' del sensor
const float factorCalibracion = 5.0; // Factor de división del módulo
const float voltajeReferencia = 5.0; // Voltaje de referencia del Arduino (cambiar este valor a 3.3 si se alimenta con este voltaje)

void setup() {
  Serial.begin(9600);
}

void loop() {
  int lecturaADC = analogRead(pinSensor); // Leer el valor analógico (0-1023)
  float voltajeSensor = (lecturaADC * voltajeReferencia) / 1023.0; // Convertir la lectura a voltaje
  float voltajeEntrada = voltajeSensor * factorCalibracion; // Calcular el voltaje real de entrada
  Serial.print("Voltaje de entrada: ");
  Serial.print(voltajeEntrada);
  Serial.println(" V");
  delay(1000); // Esperar 1 segundo antes de la siguiente lectura
}
