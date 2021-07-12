
#define NOTE_A 440
#define NOTE_B 493
#define NOTE_C 262
#define NOTE_D 294

#define ACTIVATED LOW 

const int PIEZO = 2;
const int LED = 7;


const int BUTTON_A = 6;
const int BUTTON_B = 5;
const int BUTTON_C = 4;
const int BUTTON_D = 3;


void setup()
{

  

  pinMode(BUTTON_A, INPUT);
  pinMode(BUTTON_B, INPUT);
  pinMode(BUTTON_C, INPUT);
  pinMode(BUTTON_D, INPUT);
  
  digitalWrite(BUTTON_A,HIGH);
  digitalWrite(BUTTON_B,HIGH);
  digitalWrite(BUTTON_C,HIGH);
  digitalWrite(BUTTON_D,HIGH);
  
  pinMode(LED, OUTPUT);
  digitalWrite(LED,LOW);
}

void loop()
{
  while(digitalRead(BUTTON_A) == ACTIVATED)
  {
    tone(PIEZO,NOTE_A);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(BUTTON_B) == ACTIVATED)
  {
    tone(PIEZO,NOTE_B);
    digitalWrite(LED,HIGH);
  }
  while(digitalRead(BUTTON_C) == ACTIVATED)
  {
    tone(PIEZO,NOTE_C);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(BUTTON_D) == ACTIVATED)
  {
    tone(PIEZO,NOTE_D);
    digitalWrite(LED,HIGH);
  }

  noTone(PIEZO);
  digitalWrite(LED,LOW);

}

