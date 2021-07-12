const byte rows[] = {2,3,4,5,6,7,8,9};
const byte col[] = {10,11,12,13,A0,A1,A2,A3};

byte sbs0[] = {
  B11111111,
  B11000000,
  B11000000,
  B11111111,
  B11111111,
  B00000011,
  B00000011,
  B11111111,
  };

byte  sbs1[] = {
  B11111111,
  B11111111,
  B11000000,
  B11000000,
  B11111111,
  B11111111,
  B00000011,
  B00000011,
  };

byte  sbs2[] = {
  B00000000,
  B11111111,
  B11111111,
  B11000000,
  B11000000,
  B11111111,
  B11111111,
  B00000011,
  };

byte  sbs3[] = {
  B00000000,
  B00000000,
  B11111111,
  B11111111,
  B11000000,
  B11000000,
  B11111111,
  B11111111,
  };

byte  sbs4[] = {
  B00000000,
  B00000000,
  B00000000,
  B11111111,
  B11111111,
  B11000000,
  B11000000,
  B11111111,
  };

byte  sbs5[] = {
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B11111111,
  B11111111,
  B11000000,
  B11000000,
  };

byte  sbs6[] = {
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B11111111,
  B11111111,
  B11000000,
  };

byte  sbs7[] = {
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B11111111,
  B11111111,
  };

byte  sbs8[] = {
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B11111111,
  };

byte  sbs9[] = {
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  };

byte  sbs10[] = {
  B11111110,
  B11000011,
  B11000011,
  B11111111,
  B11111111,
  B11000011,
  B11000011,
  B11111110,
  };

byte  sbs11[] = {
  B11111100,
  B11111110,
  B11000011,
  B11000011,
  B11111111,
  B11111111,
  B11000011,
  B11000011,
  };

byte  sbs12[] = {
  B00000000,
  B11111100,
  B11111110,
  B11000011,
  B11000011,
  B11111111,
  B11111111,
  B11000011,
  };

byte  sbs13[] = {
  B00000000,
  B00000000,
  B11111100,
  B11111110,
  B11000011,
  B11000011,
  B11111111,
  B11111111,
  };

byte  sbs14[] = {
  B00000000,
  B00000000,
  B00000000,
  B11111100,
  B11111110,
  B11000011,
  B11000011,
  B11111111,
  };

byte  sbs15[] = {
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B11111100,
  B11111110,
  B11000011,
  B11000011,
  };

byte  sbs16[] = {
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B11111100,
  B11111110,
  B11000011,
  };

byte  sbs17[] = {
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B11111100,
  B11111110,
  };

byte  sbs18[] = {
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B11111100,
  };;

byte  sbs19[] = {
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  };
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
drawScreen(sbs0);
} 
else if (timeCount < 100) 
{
drawScreen(sbs1);
}
else if (timeCount <  150) 
{
drawScreen(sbs2);
} 
else if (timeCount <  200) 
{
drawScreen(sbs3);
} 
else if (timeCount <  250) 
{
drawScreen(sbs4);
} 
else if (timeCount <  300) 
{
drawScreen(sbs5);
} 
else if (timeCount <  350) 
{
drawScreen(sbs6);
} 
else if (timeCount <  400) 
{
drawScreen(sbs7);
} 
else if (timeCount < 450) 
{
drawScreen(sbs8);
} 
else if (timeCount <  500) 
{
drawScreen(sbs9);
} 
else if (timeCount <  550) 
{
drawScreen(sbs10);
} 
else if (timeCount <  600) 
{
drawScreen(sbs11);
} 

 else if (timeCount <  650) 
{
drawScreen(sbs12);
} 
else if (timeCount <  700) 
{
drawScreen(sbs13);
} 
else if (timeCount < 750) 
{
drawScreen(sbs14);
} 
else if (timeCount <  800) 
{
drawScreen(sbs15);
} 
else if (timeCount <  850) 
{
drawScreen(sbs16);
} 
else if (timeCount < 900) 
{
drawScreen(sbs17);
}
else if (timeCount <  950) 
{
drawScreen(sbs18);
} 
else if (timeCount <  1000) 
{
drawScreen(sbs19);
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
