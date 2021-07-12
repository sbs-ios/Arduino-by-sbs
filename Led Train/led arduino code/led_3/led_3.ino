 k=100;
void setup() 
{
for (int i = 2; i <= 19; i++)  {pinMode(i, OUTPUT);}

}

void loop() {
  
  k=k-10;
  if (k==10){k=100;};
  int j=random(20);
  
  digitalWrite(j), HIGH);
  delay(k);
  digitalWrite(j, LOW);
  delay(k);
  
  }

