// C++ code
//
const int buttonPin = 2; 
const int ledPin = 13; 
int buttonState = 0; 

void setup() {
  
  pinMode(buttonPin, OUTPUT);
  pinMode (2, INPUT);
  
} 

void loop()  {
  
  buttonState = digitalRead(2);
  if (buttonPin == LOW) {
  digitalWrite(13, HIGH);
 //delay(100); //
  }
  else (buttonState==HIGH); {
    digitalWrite(13, LOW); }
}
