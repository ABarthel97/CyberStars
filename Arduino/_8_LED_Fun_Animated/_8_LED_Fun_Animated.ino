/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;
int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);  
}

// the loop routine runs over and over again forever:
void loop() {
  
  /*digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);               // wait for a second
  digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
  delay(50);
 
  digitalWrite(led2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);               // wait for a second
  digitalWrite(led2, LOW);    // turn the LED off by making the voltage LOW
  delay(50);

  digitalWrite(led3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);               // wait for a second
  digitalWrite(led3, LOW);    // turn the LED off by making the voltage LOW
  delay(50);

  digitalWrite(led4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);               // wait for a second
  digitalWrite(led4, LOW);    // turn the LED off by making the voltage LOW
  delay(50);
  
  digitalWrite(led5, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);               // wait for a second
  digitalWrite(led5, LOW);    // turn the LED off by making the voltage LOW
  delay(50);*/
  
  int i;
  for(i = 2; i < 7; i++)
  {
    TurnOnOff(i, 75);
  }

  for(i = 6; i >= 0; i--)
  {
     TurnOnOff(i, 75); 
  }
 
}

void TurnOnOff(int led, int msDelay)
{
 digitalWrite(led, HIGH);
 delay(msDelay);
 digitalWrite(led, LOW);
}
