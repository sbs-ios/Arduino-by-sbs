int k=100;
void setup() 
{
for (int i = 0; i < 19; i++)  {pinMode(i, OUTPUT);}

}

void loop() {
  
  k=k-5;
  if (k==10){k=100;};
  int j=19;
 for (int i = 0; i < 19; i++)  {
  digitalWrite(i, HIGH);
  delay(k  );
  digitalWrite(i, LOW);
  delay(k);}



for (int i = 0; i < 19; i++)  {
   digitalWrite(j, HIGH);
  delay(k);
  digitalWrite(j, LOW);
  delay(k);
  j=j-1;
}
  
  }
