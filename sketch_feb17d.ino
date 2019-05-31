int relay=13;
int sensor=A0;
int val;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,OUTPUT);
pinMode(A0,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
val=analogRead(A0);
Serial.print("val");
Serial.println(val);
if (val==LOW)
{
  digitalWrite(13,HIGH);
}
else
{
  digitalWrite(13, LOW);
  }
}
