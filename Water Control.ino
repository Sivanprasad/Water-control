 #include "dht.h"
#define dht_apin A5 // Analog Pin sensor is connected to
 
dht DHT;
 
int relay1=13;
int relay2=8;
int relay3=7;
int relay4=4;
int sensor1=A0;
int sensor2=A1;
int sensor3=A2;
int sensor4=A3;

int value1; 
int value2;
int value3;
int value4;

int valve1;
int valve2;
int valve3;
int valve4;


float read_current;
float read_lightintensity;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(relay1, OUTPUT);
pinMode(relay2, OUTPUT);
pinMode(relay3, OUTPUT);
pinMode(relay4, OUTPUT);

pinMode(sensor1, INPUT);
pinMode(sensor2, INPUT);
pinMode(sensor3, INPUT);
pinMode(sensor4, INPUT);

Serial.println("from sensor");

  Serial.println("DHT11 Humidity & temperature Sensor\n\n");
  delay(1000);//Wait before accessing Sensor

}

void loop() {

value1=analogRead(sensor1);
value2=analogRead(sensor2);
value3=analogRead(sensor3);
value4=analogRead(sensor4);
 
 DHT.read11(dht_apin);
    
    Serial.print("Current humidity = ");
    Serial.print(DHT.humidity);
    Serial.print("%  ");
    Serial.print("temperature = ");
    Serial.print(DHT.temperature); 
    Serial.println("C  ");



Serial.print("sensor value1 =");
Serial.print(value1);
Serial.println("%");
Serial.print("sensor value2 =");
Serial.print(value2);
Serial.println("%");
Serial.print("sensor value3 =");
Serial.print(value3);
Serial.println("%");
Serial.print("sensor value4 =");
Serial.print(value4);
Serial.println("%");


if (value1>=570) 
{
  digitalWrite(13, LOW);
}
else 
{
  digitalWrite(13, HIGH);
}

if (value2>=565)
{
digitalWrite(8, LOW);
}
else
{
digitalWrite(8, HIGH);
}

if (value3>=940)
{
  digitalWrite(7, LOW);
}
else
{
  digitalWrite(7, HIGH);
}

if (value4>=710)
{
digitalWrite(4, LOW);
}
else
{
digitalWrite(4, HIGH);
}
}
