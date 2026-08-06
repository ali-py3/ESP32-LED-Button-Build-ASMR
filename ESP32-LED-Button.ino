const int ledPin = 2;
const int buttonPin = 19;

bool ledState = false;        
bool lastButtonState = HIGH; 

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);

  digitalWrite(ledPin, LOW);
}

void loop() {
  bool buttonState = digitalRead(buttonPin);

  if (lastButtonState == HIGH && buttonState == LOW) {
    ledState = !ledState;                
    digitalWrite(ledPin, ledState);   

    delay(200); 
  }

  lastButtonState = buttonState;
}
