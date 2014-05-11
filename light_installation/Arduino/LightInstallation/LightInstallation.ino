/*
  Arduino light installation
 
  created 2014
  by Wolfgang Vogl
*/


int ledState = HIGH;
int numberOfParallelActiveLights = 2;
const int numberOfLights = 20;
int ledPin[numberOfLights];

long previousMillis = 0;
long interval = 700;

void setup() {
  // set digital pin as output
  for(int i = 0; i<numberOfLights; i++){
    pinMode(i, OUTPUT); 
    ledPin[i] = i+1;
    digitalWrite(ledPin[i], HIGH);
  }
  
  Serial.begin(9600);
}

void loop()
{
  unsigned long currentMillis = millis();
 
  if(currentMillis - previousMillis > interval) {
    previousMillis = currentMillis;   

    // change led State
    if (ledState == LOW){
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

   // change the state of the actual light
   if(ledState == 1){
      for(int i = 0; i<numberOfLights; i++){
        digitalWrite(i, HIGH);
      }
    } else {
      for(int i =0; i<numberOfParallelActiveLights; i++){
        int currentLed = random(1, numberOfLights );
        Serial.println(currentLed);
        digitalWrite(currentLed, LOW);
      }
    }
  }
}
