
// include the library code:
#include <LiquidCrystal.h>


// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(1, 2, 4, 5, 6, 7);

void setup() {
  // set up the LCD's number of columns and rows: 
  lcd.begin(16, 2);
 
}

void loop() {
  // set the cursor to (0,0):
  lcd.setCursor(0, 0);
  
  // print from 0 to 9:
  for (int thisChar = 0; thisChar < 10; thisChar++) {
   lcd.print(thisChar);
   delay(300);
  }

  // set the cursor to (16,1):
  lcd.setCursor(16,1);
  
  // set the display to automatically scroll:
  lcd.autoscroll();
  
  // print from 0 to 9:
  for (int thisChar = 0; thisChar < 10; thisChar++) {
    lcd.print(thisChar);
    delay(300);
  }
  // turn off automatic scrolling
lcd.noAutoscroll();

  
  // clear screen for the next loop:
  lcd.clear();
  
  // Print a message to the LCD.
  lcd.print("Arduino By SBS ");
  lcd.print(":-)");
  delay(300);
  
  // Turn off the display:
  lcd.noDisplay();
  delay(300);
  
   // Turn on the display:
  lcd.display();
  delay(300);
  
lcd.scrollDisplayRight(); 
delay(400);
lcd.scrollDisplayLeft(); 
delay(400);
  

  

}

