
void setup()
{
  Serial.begin(9600);
}
 
void loop()               
{
float tempC= (((analogRead(A2)) * 5.0 - 0.5)/ 1024.0) * 100 ;
 Serial.println(tempC);
 delay(1000);
}
