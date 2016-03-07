int switchPin = 8;
int switchPin2 = 9;
int ledPin = 12;
int soundPin = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode (ledPin, OUTPUT);
  pinMode (switchPin, INPUT);
  pinMode (soundPin, OUTPUT);
  pinMode (switchPin2, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(switchPin2) == HIGH)
  {
     while (digitalRead(switchPin) == HIGH)
    {
      digitalWrite(ledPin, HIGH);
     delay (100);
     digitalWrite(ledPin, LOW);
     delay(100);
     digitalWrite(soundPin, LOW);
    }
    while (digitalRead(switchPin)== LOW) {
      digitalWrite (ledPin, LOW);
      digitalWrite (soundPin, HIGH);
    }
  }
  if (digitalRead(switchPin2) ==LOW){
    digitalWrite(ledPin, LOW);
    digitalWrite(soundPin, HIGH);
  }
  
  }

