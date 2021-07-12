#include <LiquidCrystal.h>
#include <IRremote.h>
IRrecv irrecv(9);
decode_results results;
IRsend irsend;
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

String arduno_name="ahmed";

void setup()
{
 
  irrecv.enableIRIn();
  Serial.begin(9600);
  lcd.begin(16, 2);  
}

void loop() {
rcv();  

 }

void rcv() {
  
 if(irrecv.decode(&results)){ 
  if(results.value==286){
    
    lcd.clear();
    irrecv.resume();
    
 
    }else{
    Serial.print(char(results.value));
    lcd.print(char(results.value));
    irrecv.resume();
    delay(15);       
   }
 }
} 

 
void snd() {
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



