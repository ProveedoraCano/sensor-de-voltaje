# 📊 Proyecto: Medición de Voltaje con Arduino fácil

## 📝 Descripción

Este proyecto presenta dos implementaciones para medir voltajes utilizando Arduino:

1. **sensor-de-voltaje-01**: 📟 Lee los valores de voltaje y los muestra en el monitor serial.  
2. **sensor-de-voltaje-lcd**: 🖥️ Muestra los valores de voltaje en una pantalla LCD 16x2 con módulo I2C.

## ⚠️ Advertencia de Seguridad

**¡Precaución!** Al trabajar con voltajes superiores a los niveles operativos de Arduino, es crucial garantizar la seguridad del dispositivo:

- Para placas Arduino que operan a **5V**, el voltaje máximo de entrada recomendado es **25V**.  
- Para placas que operan a **3.3V**, el voltaje máximo de entrada recomendado es **16.5V**.

Superar estos límites puede dañar la placa y otros componentes.

## 📐 Especificaciones Técnicas del Módulo Sensor de Voltaje

- **Tipo**: Sensor de voltaje  
- **Rango de entrada de voltaje (VCC)**: DC 0-25V  
- **Rango de detección de voltaje**: DC 0.02445V – 25V  
- **Resolución analógica de voltaje**: 0.00489 V  
- **Voltaje máximo de detección de entrada**:
  - Para sistemas de 5V: hasta 25V (5V x 5 = 25V)  
  - Para sistemas de 3.3V: hasta 16.5V (3.3V x 5 = 16.5V)
- **Tipo de salida**: Analógica  
- **Conector**: Bloque de dos tornillos para medir tensión  
- **Polaridad**: Marcada en el módulo  
- **Compatibilidad**: Compatible con Arduino, PICs y otros microcontroladores  
- **Orificio de sujeción**: Sí

## 🛠️ Detalles del Diseño

Este módulo está diseñado según el principio de división de voltaje resistivo, utilizando un divisor de tensión compuesto por dos resistencias:

- **Resistencia R1**: 30 kΩ  
- **Resistencia R2**: 7.5 kΩ

Esta configuración permite reducir el voltaje de entrada en un factor de 5, facilitando la medición de voltajes más altos utilizando las entradas analógicas de microcontroladores que operan a 5V o 3.3V.

## ⚙️ Aplicaciones

Este sensor es ideal para:

- Monitorear el estado de baterías 🔋  
- Comprobar la alimentación de dispositivos de 12V o 24V, como tiras LED, electroimanes, ventiladores o celdas Peltier

Su diseño sencillo y eficaz lo convierte en una herramienta útil para diversas aplicaciones de medición de voltaje en proyectos electrónicos.

## 🔗 Recursos Adicionales

Para más información, puedes consultar la [página del producto en Proveedora Cano](https://proveedoracano.com/eshop/sensor-voltaje).  

Ficha técnica: [Datasheet Sensor de voltaje](https://proveedoracano.com/blog/wp-content/uploads/datasheet-sensor-de-voltaje.jpg).

## 🔌 Conexiones de Pines

### sensor-de-voltaje-01

- **Pin del Sensor 'S'**: Conectar al pin analógico `A0` de Arduino.  
- **Pin '+' del Sensor**: Conectar al pin `5V` de Arduino.  
- **Pin '-' del Sensor**: Conectar al pin `GND` de Arduino.  
- **Entradas 'VCC' y 'GND' del Sensor**: Conectar a la fuente de voltaje que se desea medir.

### sensor-de-voltaje-lcd

- **Pin del Sensor 'S'**: Conectar al pin analógico `A0` de Arduino.  
- **Pin '+' del Sensor**: Conectar al pin `5V` de Arduino.  
- **Pin '-' del Sensor**: Conectar al pin `GND` de Arduino.  
- **Entradas 'VCC' y 'GND' del Sensor**: Conectar a la fuente de voltaje que se desea medir.  
- **Módulo LCD I2C**:
  - **SDA**: Conectar al pin `A4` de Arduino.  
  - **SCL**: Conectar al pin `A5` de Arduino.  
  - **VCC**: Conectar al pin `5V` de Arduino.  
  - **GND**: Conectar al pin `GND` de Arduino.

## 💻 Código Fuente

El código fuente para ambas implementaciones se encuentra en los archivos correspondientes dentro de este repositorio.

---

# 📊 Project: Voltage Measurement with Arduino

## 📝 Description

This project presents two implementations for measuring voltages using Arduino:

1. **sensor-de-voltaje-01**: 📟 Reads voltage values and displays them on the serial monitor.  
2. **sensor-de-voltaje-lcd**: 🖥️ Displays voltage values on a 16x2 LCD screen with an I2C module.

## ⚠️ Safety Warning

**Caution!** When working with voltages higher than Arduino's operating levels, it's crucial to ensure device safety:

- For Arduino boards operating at **5V**, the recommended maximum input voltage is **25V**.  
- For boards operating at **3.3V**, the recommended maximum input voltage is **16.5V**.

Exceeding these limits can damage the board and other components.

## 📐 Technical Specifications of the Voltage Sensor Module

- **Type**: Voltage sensor  
- **Input Voltage Range (VCC)**: DC 0-25V  
- **Voltage Detection Range**: DC 0.02445V – 25V  
- **Analog Voltage Resolution**: 0.00489 V  
- **Maximum Input Detection Voltage**:
  - For 5V systems: up to 25V (5V x 5 = 25V)  
  - For 3.3V systems: up to 16.5V (3.3V x 5 = 16.5V)
- **Output Type**: Analog  
- **Connector**: Two-screw terminal block for voltage measurement  
- **Polarity**: Marked on the module  
- **Compatibility**: Compatible with Arduino, PICs, and other microcontrollers  
- **Mounting Hole**: Yes

## 🛠️ Design Details

This module is designed based on the resistive voltage divider principle, using a voltage divider composed of two resistors:

- **Resistor R1**: 30 kΩ  
- **Resistor R2**: 7.5 kΩ

This configuration reduces the input voltage by a factor of 5, making it easier to measure higher voltages using the analog inputs of microcontrollers operating at 5V or 3.3V.

## ⚙️ Applications

This sensor is ideal for:

- Monitoring battery status 🔋  
- Checking the power supply of 12V or 24V devices, such as LED strips, electromagnets, fans, or Peltier cells

Its simple and effective design makes it a useful tool for various voltage measurement applications in electronic projects.

## 🔗 Additional Resources

For more information, you can consult the [Proveedora Cano product page](https://proveedoracano.com/eshop/sensor-voltaje).

Technical datasheet: [Voltage Sensor Datasheet](https://proveedoracano.com/blog/wp-content/uploads/datasheet-sensor-de-voltaje.jpg).

## 🔌 Pin Connections

### sensor-de-voltaje-01

- **Sensor Pin 'S'**: Connect to Arduino's analog pin `A0`.  
- **Sensor '+' Pin**: Connect to Arduino's `5V` pin.  
- **Sensor '-' Pin**: Connect to Arduino's `GND` pin.  
- **Sensor 'VCC' and 'GND' Inputs**: Connect to the voltage source to be measured.

### sensor-de-voltaje-lcd

- **Sensor Pin 'S'**: Connect to Arduino's analog pin `A0`.  
- **Sensor '+' Pin**: Connect to Arduino's `5V` pin.  
- **Sensor '-' Pin**: Connect to Arduino's `GND` pin.  
- **Sensor 'VCC' and 'GND' Inputs**: Connect to the voltage source to be measured.  
- **LCD I2C Module**:
  - **SDA**: Connect to Arduino's `A4` pin.  
  - **SCL**: Connect to Arduino's `A5` pin.  
  - **VCC**: Connect to Arduino's `5V` pin.  
  - **GND**: Connect to Arduino's `GND` pin.

## 💻 Source Code

The source code for both implementations can be found in the respective files within this repository.
