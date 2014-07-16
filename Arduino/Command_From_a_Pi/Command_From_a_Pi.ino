const int ledPin = 13;
String inString = "";    // string to hold input

void setup(){
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop(){

  // Read serial input:
  while (Serial.available() > 0) {
    int inChar = Serial.read();
    if (isDigit(inChar)) {
      // convert the incoming byte to a char 
      // and add it to the string:
      inString += (char)inChar; 
    }
    // stiop reading when a new-line is encountered
    if (inChar == '\n') {
        
      if(inString.toInt() > 0)
        light(inString.toInt());
        
      // clear the string for new input:
      inString = ""; 
    }
  }
}

void light(int n){
  
  for (int i = 0; i < n; i++)  {
    digitalWrite(ledPin, HIGH);
    delay(250);
    digitalWrite(ledPin, LOW);
    delay(250);
  }
}

