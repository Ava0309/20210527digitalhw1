void setup()
{
  pinMode(A0, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  int  sensorValue;
  sensorValue=analogRead(A0); 
  Serial.println(sensorValue);
  delay(1);
  digitalWrite(13, HIGH);
  delay(sensorValue); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(sensorValue); // Wait for 1000 millisecond(s)
}