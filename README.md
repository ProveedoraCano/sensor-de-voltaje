# 📊 Proyecto: Medición de Voltaje con Arduino

## 📝 Descripción

Este proyecto presenta dos implementaciones para medir voltajes utilizando Arduino:

1. **sensor-de-voltaje-01**: 📟 Lee los valores de voltaje y los muestra en el monitor serial.
2. **sensor-de-voltaje-lcd**: 🖥️ Muestra los valores de voltaje en una pantalla LCD 16x2 con módulo I2C.

## ⚠️ Advertencia de Seguridad

**¡Precaución!** Al trabajar con voltajes superiores a los niveles operativos de Arduino, es crucial garantizar la seguridad del dispositivo:

- Para placas Arduino que operan a **5V**, el voltaje máximo de entrada recomendado es **25V**.
- Para placas que operan a **3.3V**, el voltaje máximo de entrada recomendado es **16.5V**.

Superar estos límites puede dañar la placa y otros componentes.

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
2. **sensor-de-voltaje-lcd**: 🖥️ Displays voltage values on a 16x2 LCD screen with I2C module.

## ⚠️ Safety Warning

**Caution!** When working with voltages higher than Arduino's operating levels, it's crucial to ensure device safety:

- For Arduino boards operating at **5V**, the recommended maximum input voltage is **25V**.
- For boards operating at **3.3V**, the recommended maximum input voltage is **16.5V**.

Exceeding these limits can damage the board and other components.

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

