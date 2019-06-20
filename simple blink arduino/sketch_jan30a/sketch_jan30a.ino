//This is a simple led blinking code that delays for 1 second.
//author Codeninja Owen 
#define LED 11
#define LED 5
#define LED 3

void setup() {
  
  pinMode(11, OUTPUT);// sets LED to pin mode 12
  pinMode(5, OUTPUT);//
  pinMode(3, OUTPUT);//

}

void loop() { //This where the code gets executted
  
  digitalWrite(11, HIGH);// Lights On the LED upon uploading the code to the uno board
  delay(1000);
  
  digitalWrite(11, LOW);//Turms off the LED after 1second of delay
  delay(1000);
  digitalWrite(5, HIGH);// Lights On the LED upon uploading the code to the uno board
  delay(1000);
  
  digitalWrite(5, LOW);//Turms off the LED after 1second of delay
  delay(1000);
  digitalWrite(3, HIGH);// Lights On the LED upon uploading the code to the uno board
  delay(1000);
  
  digitalWrite(3, LOW);//Turms off the LED after 1second of delay
  delay(1000);
}
