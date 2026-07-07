#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);

int sensorPin = A0;
int led = 8;

int hr[5];
int spo2[5];

int index = 0;

void setup()
{
  Serial.begin(9600);

  lcd.begin(16,2);

  pinMode(led,OUTPUT);

  for(int i=0;i<5;i++)
  {
    hr[i]=80;
    spo2[i]=98;
  }
}

void loop()
{
  int value = analogRead(sensorPin);

  int heartRate = map(value,0,1023,45,130);

  int oxygen = map(value,0,1023,90,100);

  hr[index]=heartRate;
  spo2[index]=oxygen;

  index++;

  if(index>=5)
    index=0;

  int avgHR=0;
  int avgSpO2=0;

  for(int i=0;i<5;i++)
  {
    avgHR+=hr[i];
    avgSpO2+=spo2[i];
  }

  avgHR/=5;
  avgSpO2/=5;

  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("HR:");
  lcd.print(avgHR);
  lcd.print(" bpm");

  lcd.setCursor(0,1);
  lcd.print("SpO2:");
  lcd.print(avgSpO2);
  lcd.print("%");

  Serial.print("Heart Rate: ");
  Serial.print(avgHR);
  Serial.print(" bpm");

  Serial.print("   SpO2: ");
  Serial.print(avgSpO2);
  Serial.println("%");

  if(avgHR<50 || avgHR>120 || avgSpO2<94)
  {
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(led,LOW);
  }

  delay(2000);
}
