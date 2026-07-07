Heart Rate & SpO₂ Monitor (Simulation)

This project simulates a Heart Rate and Blood Oxygen (SpO₂) Monitoring System using an Arduino. Since the MAX30102 pulse oximeter is unavailable in the simulator, an LDR is used as a proxy sensor to generate varying analog readings representing changes in heart rate and oxygen saturation.

Sensor readings are smoothed using a 5-reading rolling average to reduce fluctuations. The averaged Heart Rate and SpO₂ values are displayed on a 16×2 LCD (or Serial Monitor) every two seconds. A Red LED alerts the user whenever the heart rate falls below 50 bpm, rises above 120 bpm, or the SpO₂ level drops below 94%.

Features
Simulated heart rate and SpO₂ monitoring using an LDR.
5-sample rolling average for smoother readings.
LCD and Serial Monitor output updated every 2 seconds.
Red LED alert for abnormal health values.
Health readings logged to a CSV file for future analysis.

Working Principle
The LDR provides an analog value that changes with light intensity.
The Arduino maps this value to simulated Heart Rate and SpO₂ readings.
A rolling average of the last five readings is calculated.
The averaged values are displayed on the LCD and Serial Monitor every two seconds.
If Heart Rate is below 50 bpm, above 120 bpm, or SpO₂ is below 94%, the Red LED turns ON to indicate an abnormal condition.
The readings can be logged to a health_log.csv file for record keeping and analysis.
