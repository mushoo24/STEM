int switchPin = 8;
int ledPin= 13;
int soundPin = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode (ledPin, OUTPUT);
  pinMode (switchPin, INPUT);
  pinMode (soundPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(switchPin) == HIGH)
    {
      digitalWrite(ledPin, HIGH);
     delay (100);
     digitalWrite(ledPin, LOW);
     delay(100);
    
    }
    else
      {
          digitalWrite(ledPin, LOW);
      }

    if (digitalRead(switchPin) == HIGH)
      {
        digitalWrite(soundPin, LOW);
      }
      else
      { digitalWrite(soundPin, HIGH);
      }
    
    

}
