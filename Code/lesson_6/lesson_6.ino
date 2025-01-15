/*
  keyestudio sun_follower
  lesson 6.1
  photovaristor
  http://www.keyestudio.com
*/
#define photos  A0   //photoresistance pin to A0
#define LED 3   //define the LED pin as D3
volatile int value = 0;
void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);// initialize digital pin LED as an output.
}

void loop () {
  value = analogRead(photos);  //read the value detected by the sensor
  Serial.println(value);
  if (value < 300) {  //when the analog value is less than 300
    digitalWrite(LED, HIGH); //the LED lights up
  }
  else {  //when the analog value is bigger than 300
    digitalWrite(LED, LOW); //the LED is off
  }
  delay(100);               //delay in 100ms
}
