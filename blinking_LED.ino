int led_red = 13; // the red LED is connected to Pin 13 of the Arduino
void setup() {
  // set up all the LEDs as OUTPUT
  pinMode(led_red, OUTPUT);
  
}

void loop() {
  
  for(int i =0;i<4;i++){
  // turn the LED on and off for 1 second
  digitalWrite(led_red, HIGH); 
  delay(1000);    // wait 1 seconds
  digitalWrite(led_red, LOW);   
  delay(1000);   // wait 1 second
  }
  
  for(int i =0;i<4;i++){
  // turn the LED on and off for 1 second
  digitalWrite(led_red, HIGH); 
  delay(500);    // wait 0.5 seconds
  digitalWrite(led_red, LOW);   
  delay(500);   // wait 0.5 second
  }
  
}
