const byte rows[] = {2,3,4,5,6,7,8,9};
const byte col[] = {10,11,12,13,A0,A1,A2,A3};


// The display buffer
byte ALL[] = {B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111};
byte EX[] = {B00000000,B00010000,B00010000,B00010000,B00010000,B00000000,B00010000,B00000000};
byte A[] = {  B00000000,B00111100,B01100110,B01100110,B01111110,B01100110,B01100110,B01100110};
byte B[] = {B01111000,B01001000,B01001000,B01110000,B01001000,B01000100,B01000100,B01111100};
byte C[] = {B00000000,B00011110,B00100000,B01000000,B01000000,B01000000,B00100000,B00011110};
byte D[] = {B00000000,B00111000,B00100100,B00100010,B00100010,B00100100,B00111000,B00000000};
byte E[] = {B00000000,B00111100,B00100000,B00111000,B00100000,B00100000,B00111100,B00000000};
byte F[] = {B00000000,B00111100,B00100000,B00111000,B00100000,B00100000,B00100000,B00000000};
byte G[] = {B00000000,B00111110,B00100000,B00100000,B00101110,B00100010,B00111110,B00000000};
byte H[] = {B00000000,B00100100,B00100100,B00111100,B00100100,B00100100,B00100100,B00000000};
byte I[] = {B00000000,B00111000,B00010000,B00010000,B00010000,B00010000,B00111000,B00000000};
byte J[] = {B00000000,B00011100,B00001000,B00001000,B00001000,B00101000,B00111000,B00000000};
byte K[] = {B00000000,B00100100,B00101000,B00110000,B00101000,B00100100,B00100100,B00000000};
byte L[] = {B00000000,B00100000,B00100000,B00100000,B00100000,B00100000,B00111100,B00000000};
byte M[] = {B00000000,B00000000,B01000100,B10101010,B10010010,B10000010,B10000010,B00000000};
byte N[] = {B00000000,B00100010,B00110010,B00101010,B00100110,B00100010,B00000000,B00000000};
byte O[] = {B00000000,B00111100,B01000010,B01000010,B01000010,B01000010,B00111100,B00000000};
byte P[] = {B00000000,B00111000,B00100100,B00100100,B00111000,B00100000,B00100000,B00000000};
byte Q[] = {B00000000,B00111100,B01000010,B01000010,B01000010,B01000110,B00111110,B00000001};
byte R[] = {B00000000,B00111000,B00100100,B00100100,B00111000,B00100100,B00100100,B00000000};
byte S[] = {B00000000,B00111100,B00100000,B00111100,B00000100,B00000100,B00111100,B00000000};
byte T[] = {B00000000,B01111100,B00010000,B00010000,B00010000,B00010000,B00010000,B00000000};
byte U[] = {B00000000,B01000010,B01000010,B01000010,B01000010,B00100100,B00011000,B00000000};
byte V[] = {B00000000,B00100010,B00100010,B00100010,B00010100,B00010100,B00001000,B00000000};
byte W[] = {B00000000,B10000010,B10010010,B01010100,B01010100,B00101000,B00000000,B00000000};
byte X[] = {B00000000,B01000010,B00100100,B00011000,B00011000,B00100100,B01000010,B00000000};
byte Y[] = {B00000000,B01000100,B00101000,B00010000,B00010000,B00010000,B00010000,B00000000};
byte Z[] = {B00000000,B00111100,B00000100,B00001000,B00010000,B00100000,B00111100,B00000000};

float timeCount = 0;
void setup() 
{
    // Open serial port
    Serial.begin(9600);
    
    // Set all used pins to OUTPUT
    // This is very important! If the pins are set to input
    // the display will be very dim.
    for (byte i = 2; i <= 13; i++)
        pinMode(i, OUTPUT);
    pinMode(A0, OUTPUT);
    pinMode(A1, OUTPUT);
    pinMode(A2, OUTPUT);
    pinMode(A3, OUTPUT);
}

void loop() {
  // This could be rewritten to not use a delay, which would make it appear brighter
delay(5);
timeCount += 1;

if(timeCount <  60) 
{
drawScreen(A);
} 
else if (timeCount < 100) 
{
drawScreen(B);
}
else if (timeCount <  150) 
{
drawScreen(C);
} 
else if (timeCount <  200) 
{
drawScreen(D);
} 
else if (timeCount <  250) 
{
drawScreen(D);
} 
else if (timeCount <  300) 
{
drawScreen(E);
} 
else if (timeCount <  350) 
{
drawScreen(F);
} 
else if (timeCount <  400) 
{
drawScreen(G);
} 
else if (timeCount < 450) 
{
drawScreen(H);
} 
else if (timeCount <  500) 
{
drawScreen(I);
} 
else if (timeCount <  550) 
{
drawScreen(J);
} 
else if (timeCount <  600) 
{
drawScreen(K);
} 

 else if (timeCount <  650) 
{
drawScreen(L);
} 
else if (timeCount <  700) 
{
drawScreen(M);
} 
else if (timeCount < 750) 
{
drawScreen(N);
} 
else if (timeCount <  800) 
{
drawScreen(O);
} 
else if (timeCount <  850) 
{
drawScreen(P);
} 
else if (timeCount < 900) 
{
drawScreen(Q);
}
else if (timeCount <  950) 
{
drawScreen(R);
} 
else if (timeCount <  1000) 
{
drawScreen(S);
} 
else if (timeCount <  1050) 
{
drawScreen(T);
} 
else if (timeCount <  1100) 
{
drawScreen(U);
} 
else if (timeCount <  1150) 
{
drawScreen(V);
} 
else if (timeCount <  1200) 
{
drawScreen(W);
} 
else if (timeCount <  1250) 
{
drawScreen(X);
} 
else if (timeCount <  1300) 
{
drawScreen(Y);
} 
else if (timeCount <  1350) 
{
drawScreen(Z);
} 
else if (timeCount <  1400) 
{

drawScreen(ALL);
} 
else {
// back to the start
timeCount = 0;
}
}

 void  drawScreen(byte buffer2[])
 { 
   // Turn on each row in series
    for (byte i = 0; i < 8; i++)        // count next row
     {
        digitalWrite(rows[i], HIGH);    //initiate whole row
        for (byte a = 0; a < 8; a++)    // count next row
        {
          // if You set (~buffer2[i] >> a) then You will have positive
          digitalWrite(col[a], (buffer2[i] >> a) & 0x01); // initiate whole column
          
          delayMicroseconds(100);       // uncoment deley for diferent speed of display
          //delayMicroseconds(1000);
          //delay(10);
          //delay(100);
          
          digitalWrite(col[a], 1);      // reset whole column
        }
        digitalWrite(rows[i], LOW);     // reset whole row
        // otherwise last row will intersect with next row
    }
}
//devloped by SBS channel
