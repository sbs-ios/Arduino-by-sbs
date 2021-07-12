#include <IRremote.h>
#include <LiquidCrystal.h>
IRrecv irrecv(2);
decode_results results;

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
void setup()
{
   irrecv.enableIRIn();
  Serial.begin(9600);
  lcd.begin(16, 2);
}

void loop() {
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


