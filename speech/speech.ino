/*
 * talk to Arduino
 * Created: 24/04/2020
 *  Author: moty22.co.uk
*/


// the setup function runs once when you press reset or power the board
void setup() {
    // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
    // initialize outputs 2,3
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);

  
}

// the loop function runs over and over again forever
void loop() {
  unsigned char  inByte;
  
   if (Serial.available() > 0) {
          // read the incoming byte:
      inByte = Serial.read();
      
      if(inByte  == 49) {digitalWrite(2,LOW);}    //49 = UTF8 "1"
      if(inByte  == 50) {digitalWrite(2,HIGH);}
      if(inByte  == 51) {digitalWrite(3,LOW);}
      if(inByte  == 52) {digitalWrite(3,HIGH);}    //52 = UTF8 "4"
      

   }
}


