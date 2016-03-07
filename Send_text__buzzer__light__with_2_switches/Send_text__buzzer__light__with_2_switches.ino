int switchPin = 8;
int switchPin2 = 9;
int ledPin = 12;
int soundPin = 5;

#include <SoftwareSerial.h>
#include <SoftwareSerial.h>

SoftwareSerial mySerial(2, 3);
char inChar = 0;
char message[] = "Help!";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello Debug Terminal!");
  // set the data rate for the SoftwareSerial port
  mySerial.begin(9600);

  //Turn off echo from GSM
  mySerial.print("ATE0");
  mySerial.print("\r");
  delay(300);
  
  //Set the module to text mode
  mySerial.print("AT+CMGF=1");
  mySerial.print("\r");
  delay(500);
  
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
     
       mySerial.print("AT+CMGS=\"");
  // CHANGE THE NUMBER BELOW! 
  // 129 for domestic #s, 145 if with +area code in front of #
  mySerial.print("5089541270\",129");                                         //this is where you would replace the phone number
  mySerial.print("\r");
  delay(300);
  // TYPE THE BODY OF THE TEXT HERE! 160 CHAR MAX!
 // mySerial.print("T4D);
  mySerial.print(message);
  // Special character to tell the module to send the message
  mySerial.write(0x1A);
  delay(500);
    }
  }
    while (digitalRead(switchPin)== LOW) {
      digitalWrite (ledPin, LOW);
      digitalWrite (soundPin, HIGH);
    }
  }


