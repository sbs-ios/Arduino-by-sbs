void setup() {

  Serial.begin(9600); // Monitor
}

void loop() {
  
      int lightLevel = analogRead(A0); //Read the lightlevel
      Serial.println(lightLevel);
      delay(1000);

}


