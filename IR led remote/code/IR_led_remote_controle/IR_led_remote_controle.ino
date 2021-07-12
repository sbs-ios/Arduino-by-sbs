
#include <IRremote.h>
IRrecv irrecv(12);
decode_results results;

 long unsigned int remote[21]{16738455,16724175,16718055,16743045,16716015,16726215,16734885,16728765,16730805,16732845,16754775,16769055,16748655,16750695,16756815,16720605,16712445,16761405,16753245,16736925,16769565};
                             //    0      1        2        3          4      5        6         7         8        9       +        -         EQ      +100     +200     prev    next      play    ch-      ch       ch+  

int pizo=0;


void setup()
{
  for (int i = 2; i <= 11; i++)  {pinMode(i, OUTPUT);}
  
  irrecv.enableIRIn();
  Serial.begin(9600);
}

void loop(){

  if (irrecv.decode(&results)) {
    Serial.println(results.value);
    
      if (results.value==remote[0]){digitalWrite(2, HIGH);}
     
      for (int i=1;i<=9;i++){
        if (remote[i]==results.value){digitalWrite((i+2), HIGH);}
      }

      if (results.value==remote[12]){
        for (int i=2;i<=12;i++){ digitalWrite(i, LOW);}
      }
        
      irrecv.resume();
      delay(15);
  }  
}



