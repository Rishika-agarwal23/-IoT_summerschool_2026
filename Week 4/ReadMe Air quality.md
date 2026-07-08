Description

This Arduino-based project monitors gas concentration and ambient temperature using a gas sensor and a TMP36 temperature sensor. Based on the detected gas level, the system classifies the environment as Safe, Moderate, or Danger, provides LED and buzzer alerts, and logs all readings to the Serial Monitor in CSV format.

Components
Arduino Uno
Gas Sensor (MQ series or Tinkercad Gas Sensor)
TMP36 Temperature Sensor
Red, Green, and Blue LEDs
Piezo Buzzer
Resistors, Breadboard, and Jumper Wires
Pin Configuration
Gas Sensor → A0
TMP36 → A1
Red LED → D8
Green LED → D9
Blue LED → D10
Buzzer → D7
Working
Reads gas concentration and temperature continuously.
Converts TMP36 output to temperature in °C.
Indicates system status:
Safe (Gas < 300): Green LED, buzzer OFF
Moderate (300–599): Yellow LED, intermittent buzzer
Danger (≥ 600): Red LED, continuous alarm
Prints timestamp, gas value, temperature, and severity to the Serial Monitor.
Output
Timestamp,Gas Value,Temperature(C),Severity
0,245,26.8,SAFE
2000,410,27.3,MODERATE
4000,675,28.1,DANGER
