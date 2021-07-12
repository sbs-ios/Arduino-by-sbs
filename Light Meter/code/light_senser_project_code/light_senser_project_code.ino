
/*
Common Anode 7-segment LED display.

    A
   ---
F |   | B
  | G |
   ---
E |   | C
  |   |
   ---
    D
  This example code is in the public domain.
 */             
int pins[7]={2,3,4,5,6,7,8};
//  pins[] {A,B,C,D,E,G,H};

int num_array[10][7] = {  { 1,1,1,1,1,1,0 },    // 0
                          { 0,1,1,0,0,0,0 },    // 1
                          { 1,1,0,1,1,0,1 },    // 2
                          { 1,1,1,1,0,0,1 },    // 3
                          { 0,1,1,0,0,1,1 },    // 4
                          { 1,0,1,1,0,1,1 },    // 5
                          { 1,0,1,1,1,1,1 },    // 6
                          { 1,1,1,0,0,0,0 },    // 7
                          { 1,1,1,1,1,1,1 },    // 8
                          { 1,1,1,0,0,1,1 }};   // 9
                          
void setup() 
{ 
  // set pin modes
for (int j=2; j <= 8; j++) {
pinMode(j, OUTPUT); 
Serial.begin(9600); // Monitor
}
}

void loop() 
{
  int lightLevel = analogRead(A0); //Read the lightlevel
      Serial.println(lightLevel);
      lightLevel = map(lightLevel, 0, 1023, 0, 9);
      
   Num_Write(lightLevel);
   delay(1000); 

}

// this functions writes values to the sev seg pins  
void Num_Write(int number) 
{
  for (int j=0; j <= 7; j++) {
   digitalWrite(pins[j], num_array[number][j]);
  }
}

