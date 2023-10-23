//
//    FILE: dht11.cpp
// VERSION: 0.4.1
// PURPOSE: DHT11 Temperature & Humidity Sensor library for Arduino
// LICENSE: GPL v3 (http://www.gnu.org/licenses/gpl.html)
//
// DATASHEET: http://www.micro4you.com/files/sensor/DHT11.pdf
//
// HISTORY:
// George Hadjikyriacou - Original version (??)
// Mod by SimKard - Version 0.2 (24/11/2010)
// Mod by Rob Tillaart - Version 0.3 (28/03/2011)
// + added comments
// + removed all non DHT11 specific code
// + added references
// Mod by Rob Tillaart - Version 0.4 (17/03/2012)
// + added 1.0 support
// Mod by Rob Tillaart - Version 0.4.1 (19/05/2012)
// + added error codes
//

#include "dht11.h"

// Return values:
// DHTLIB_OK
// DHTLIB_ERROR_CHECKSUM
// DHTLIB_ERROR_TIMEOUT
int dht11::read(int pin)
{
    // BUFFER TO RECEIVE
    uint8_t bits[5]={0,0,0,0,0};
    uint8_t cnt = 7;
    uint8_t idx = 0;

    // EMPTY BUFFER
    for (int i=0; i< 5; i++) bits[i] = 0;

    // REQUEST SAMPLE
    pinMode(pin, OUTPUT);
    digitalWrite(pin, LOW);
    delay(20);
    digitalWrite(pin, HIGH);
    delayMicroseconds(40);
    pinMode(pin, INPUT);

    // ACKNOWLEDGE or TIMEOUT
    unsigned int loopCnt = 80;
    while(digitalRead(pin) == LOW)
    {
        delayMicroseconds(1);
        if (loopCnt-- == 0) return DHTLIB_ERROR_TIMEOUT;
    }

    loopCnt = 80;
    while(digitalRead(pin) == HIGH)
    {
        delayMicroseconds(1);
        if (loopCnt-- == 0) return DHTLIB_ERROR_TIMEOUT;
    }

    // READ OUTPUT - 40 BITS => 5 BYTES or TIMEOUT
    for (int i=0; i<40; i++)
    {
        loopCnt = 10000;
        while(digitalRead(pin) == LOW)
            if (loopCnt-- == 0) return DHTLIB_ERROR_TIMEOUT;

        unsigned long t = micros();

        loopCnt = 10000;
        while(digitalRead(pin) == HIGH)
            if (loopCnt-- == 0) return DHTLIB_ERROR_TIMEOUT;

        if ((micros() - t) > 40) bits[idx] |= (1 << cnt);
        if (cnt == 0)   // next byte?
        {
            cnt = 7;    // restart at MSB
            idx++;      // next byte!
        }
        else cnt--;
    }

    // WRITE TO RIGHT VARS
        // as bits[1] and bits[3] are allways zero they are omitted in formulas.
    humidity    = bits[0];
    temperature = bits[2];

    byt0=bits[0];
    byt1=bits[1];
    byt2=bits[2];
    byt3=bits[3];
    byt4=bits[4];

    uint8_t sum = bits[0] + bits[1]+bits[2]+bits[3];

    if (bits[4] != sum) return DHTLIB_ERROR_CHECKSUM;
    return DHTLIB_OK;
}
//
// END OF FILE
//
