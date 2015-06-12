// Sketch servant à lire les données de l'anemometre
// affiche et 


const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to

int sensorValue = 0;        // value read from the pot
int outputValue = 0;        // value output to the PWM (analog out)

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600); 
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);            

 
  // print the results to the serial monitor:                       
  Serial.println(sensorValue);      
  

  // wait 33 milliseconds before the next loop
  // for the analog-to-digital converter to settle
  // after the last reading:
  delay(33);                     
}
