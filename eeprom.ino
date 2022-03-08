#include <EEPROM.h>
// the current address in the EEPROM (i.e. which byte
// we're going to write to next)
int addr = 0;
int var=0;
void setup()
{   
  var = EEPROM.read(addr);
    Serial.begin(115200);
}

void loop()
{

EEPROM.write(addr,var);
var++;
var = EEPROM.read(addr);
EEPROM.commit();
Serial.println(var);
}
