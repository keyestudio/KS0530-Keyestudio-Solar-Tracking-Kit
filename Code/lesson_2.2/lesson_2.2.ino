/*
  keyestudio sun_follower
  lesson 2.2
  PWM
  http://www.keyestudio.com
*/
#define LED 3 //define the pin of the LED as D3
int value;

void setup()
{
  pinMode(LED, OUTPUT);// initialize digital pin LED as an output.
}
void loop () {
  for (value = 0; value < 255; value = value + 1) {
    analogWrite (LED, value); // LED lights gradually light up
    delay (20); // delay 20MS
  }
  for (value = 255; value > 0; value = value - 1) {
    analogWrite (LED, value); // LED gradually goes out
    delay (20); // delay 20MS
  }
}
