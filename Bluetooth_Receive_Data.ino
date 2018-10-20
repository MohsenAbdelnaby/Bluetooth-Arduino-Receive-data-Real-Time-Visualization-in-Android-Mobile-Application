/* Electronoobs Bluetooth data receive with
 * Android and Arduino. Small example.
 * Remember to disconnect the Rx and Tx pins of the HC-06 when
 * uploading the code
 */
 
//Inputs
int in = A0;

void setup() {
  Serial.begin(9600);
  pinMode(in,INPUT);

}

void loop() {
  //Map the value from 10 bits to 8 bits:
  
  byte val = map(analogRead(in),0,1024.0,0,255);    //Byte = 8 bits = 2 to the 8 = 255  
  Serial.write(val);                                //Serial.write will send only one byte at a time  
  delay(400);                                        //Small delay between each data send  
}
