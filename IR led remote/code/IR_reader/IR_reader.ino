
#include <IRremote.h>
IRrecv irrecv(12);
decode_results results;

void setup()
{ 
  irrecv.enableIRIn();
  Serial.begin(9600);
}

void loop(){
  if (irrecv.decode(&results)) {
      Serial.println(results.value);    
      irrecv.resume();
      delay(15);
  }  
}



