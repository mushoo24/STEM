#include <GSM.h>
GSM gsmAccess; // include a 'true' parameter for debug enabled
GSM_SMS sms;
const char myphone = 5089541270;

void setup() {
  // put your setup code here, to run once:
sms.beginSMS(myphone);
sms.print("Help");
sms.endSMS();
}

void loop() {
  // put your main code here, to run repeatedly:

}
