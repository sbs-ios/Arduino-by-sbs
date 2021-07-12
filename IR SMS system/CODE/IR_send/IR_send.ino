
#include <IRremote.h>

IRsend irsend;

String arduno_name="ahmed";

void setup()
{
  Serial.begin(9600);  
}

void loop() {
 
 if(Serial.available()){
  irsend.sendSony(int("°"), 16);
  delay(25);
    
  String out=Serial.readString();
  String message=arduno_name+':'+out; 
  Serial.print(message);
  const int msize=message.length();
  for (int i = 0; i < msize; i++) { 
    irsend.sendSony(int(message[i]), 16);
    delay(25);
  }
 }   
}



