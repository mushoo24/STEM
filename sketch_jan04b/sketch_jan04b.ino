int switchPin = 8;
int ledPin= 13;
int soundPin = 4;
int ladPin = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode (ledPin, INPUT);
  pinMode (switchPin, OUTPUT);
  pinMode (soundPin, INPUT);
  pinMode (ladPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(switchPin) == HIGH)
    {
     digitalWrite(ledPin, HIGH);
     delay(100);
     digitalWrite(ledPin, LOW);
     delay(100);
     digitalWrite(ladPin, HIGH);
     delay(100);
     digitalWrite(ladPin, LOW);
     delay(100);
     
    }
    else
      {
        digitalWrite(ledPin, LOW);
      }
    if (digitalRead(switchPin) == HIGH)
      {
        digitalWrite(soundPin, HIGH);
        delay(1000);
        digitalWrite(soundPin, LOW);
        delay(1000);
      }
      else
      { digitalWrite(soundPin, LOW);
      }
    

}
