#include <SFE_MG2639_CellShield.h>


void setup() {
  Serial.begin(9600);
  
  // serialTrigger() halts execution of the program until
  // any value is received over the serial link. Cell data
  // costs $, so we don't want to use it unless it's visible!
  serialTrigger();
  
   sms.setMode(SMS_TEXT_MODE);
   sms.start();
}

void loop() {
  // put your main code here, to run repeatedly:

}
void serialTrigger()
{
  Serial.println(F("Send some serial to start"));
  while (!Serial.available())
    ;
  Serial.read();
}
