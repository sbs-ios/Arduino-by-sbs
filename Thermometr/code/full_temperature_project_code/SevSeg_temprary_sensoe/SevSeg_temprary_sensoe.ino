
#include "SevSeg.h"
SevSeg sevseg; //Instantiate a seven segment controller object

void setup() {
  
  byte numDigits = 4;
 byte digitPins[] = {9, 10, 11, 12};
  byte segmentPins[] = {2, 3, 4, 5, 6, 7, 8, 13};
  bool resistorsOnSegments = false; // 'false' means resistors are on digit pins
  byte hardwareConfig = COMMON_ANODE; // See README.md for options
  bool updateWithDelays = false; // Default 'false' is Recommended
  bool leadingZeros = false; // Use 'true' if you'd like to keep the leading zeros
  bool disableDecPoint = false; // Use 'true' if your decimal point doesn't exist or isn't connected
  
  sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments,
  updateWithDelays, leadingZeros, disableDecPoint);
  sevseg.setBrightness(90);
}


void loop() {

  static unsigned long timer = millis();
  if (millis() - timer >=900) {
    timer += 900;

float tempC= (((analogRead(A0)) * 5.0 - 0.5)/ 1024.0) * 100 ;
    sevseg.setNumber(tempC,2);
  }

  sevseg.refreshDisplay(); // Must run repeatedly
}

/// END ///
