int switchPin = 8;
int ledPin= 13;

void setup() {
  // put your setup code here, to run once:
  pinMode (ledPin, INPUT);
  pinMode (switchPin, OUTPUT);
  pinMode (11, OUTPUT);

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
    
    

}
