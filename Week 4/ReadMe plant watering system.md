Automated Plant Watering System

Components
Arduino Uno
Soil Moisture Sensor
LDR (Light Dependent Resistor)
16×2 LCD Display
Push Button
LED (Pump Indicator)
Breadboard and Jumper Wires
Pin Configuration
Soil Moisture Sensor → A0
LDR → A1
LCD → RS(12), E(11), D4(5), D5(4), D6(3), D7(2)
Pump Indicator LED → D8
Push Button → D7 (INPUT_PULLUP)
Working
Reads soil moisture and converts it to a percentage.
Uses the LDR to detect low-light conditions as simulated rainfall.
Classifies soil moisture as:
Dry: < 30%
Optimal: 30–69%
Wet: ≥ 70%
Automatically turns the pump ON only when the soil is dry and no rain is detected.
Supports manual pump activation with a 5-minute lockout to prevent repeated watering.
Displays moisture percentage, soil status, and pump status on the LCD.
Logs moisture, rain status, and last watering time to the Serial Monitor.
Sample Serial Output
Moisture=24% Rain=NO Last=15000
Moisture=58% Rain=NO Last=15000
Moisture=82% Rain=YES Last=15000
