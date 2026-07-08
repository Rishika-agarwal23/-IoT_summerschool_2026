Smart Parking Distance Monitoring System

Components
ESP32 Development Board
HC-SR04 Ultrasonic Sensor
Green LED
Yellow LED
Red LED
Piezo Buzzer
Breadboard and Jumper Wires
Pin Configuration
HC-SR04 Trigger → GPIO 5
HC-SR04 Echo → GPIO 18
Green LED → GPIO 2
Yellow LED → GPIO 4
Red LED → GPIO 15
Buzzer → GPIO 13
Working
Measures the distance using the HC-SR04 ultrasonic sensor.
Stores the last 10 distance readings and calculates their rolling average.
Classifies the distance into:
Normal: > 30 cm
Warning: 15–30 cm
Critical: < 15 cm
Indicates the current status using LEDs and a buzzer:
Normal: Green LED
Warning: Yellow LED with intermittent buzzer
Critical: Red LED with continuous buzzer
Displays the average distance and status on the Serial Monitor.
Sample Serial Output
Average Distance = 42.6 cm
NORMAL

Average Distance = 22.3 cm
WARNING

Average Distance = 10.8 cm
CRITICAL
