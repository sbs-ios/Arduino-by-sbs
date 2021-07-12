int k=100;
void setup() 
{
for (int i = 2; i <= 19; i++)  {pinMode(i, OUTPUT);}

}

void loop() {
  
  k=k-10;
  if (k==10){k=100;};
  int j=19;
 for (int i = 2; i <= 19; i++)  {
  digitalWrite(i, HIGH);
  delay(k);
  digitalWrite(j, HIGH);
  delay(k);
  
  digitalWrite(i, LOW);
  delay(k);
  digitalWrite(j, LOW);
  delay(k);
  j=j-1;if (j==2){j=19;};
  
  }}
