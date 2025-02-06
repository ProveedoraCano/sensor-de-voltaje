#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Configuración de la LCD: dirección 0x27, 16 columnas y 2 filas (ajusta la dirección si es necesario)
LiquidCrystal_I2C lcd(0x27, 16, 2);

const int pinSensor = A0;              // Pin analógico conectado al pin 'S' del sensor
const float factorCalibracion = 4.81;     // Factor de división del módulo, ajusta aquí para calibrar el módulo
const float voltajeReferencia = 5.0;     // Voltaje de referencia del Arduino (usa 3.3 si es necesario)

void setup() {
  Serial.begin(9600);
  lcd.init();                          // Inicializa la LCD
  lcd.backlight();                     // Enciende la luz de fondo
  lcd.clear();
}

void loop() {
  int lecturaADC = analogRead(pinSensor);                            // Leer el valor analógico (0-1023)
  float voltajeSensor = (lecturaADC * voltajeReferencia) / 1023.0;     // Convertir la lectura a voltaje
  float voltajeEntrada = voltajeSensor * factorCalibracion;            // Calcular el voltaje real de entrada
  
  // Imprimir en el monitor serial
  Serial.print("Voltaje de entrada: ");
  Serial.print(voltajeEntrada);
  Serial.println(" V");

  // Mostrar el resultado en la LCD
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Voltaje Entrada:");
  lcd.setCursor(0, 1);
  lcd.print(voltajeEntrada);
  lcd.print(" V");
  
  delay(1000); // Esperar 1 segundo antes de la siguiente lectura
}

