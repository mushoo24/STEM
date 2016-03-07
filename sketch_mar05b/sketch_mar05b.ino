// The MG2639 library uses the SoftwareSerial library, and
// requires it to be included first.
#include <SoftwareSerial.h> 
// Include the SFE_MG2639_CellShield library to access
// the cellular functions.
#include <SFE_MG2639_CellShield.h>    

// Run cell.begin() to initialize communication with the
// module and set it up.
uint8_t status = cell.begin();
while (status <= 0)
{
// If begin() returns 0 or a negative number, the Arduino
// is unable to communicate with the shield. Make sure
// it's getting enough power. Try again making sure the
// MG2639 is booted up before running the sketch.
  Serial.println("Unable to communicate with shield.");
  while(1)
    ;
}


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
