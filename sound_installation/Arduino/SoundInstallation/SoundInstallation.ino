/*
  Arduino sound installation
 
  created 2014
  by Wolfgang Vogl
*/

//int configPin = 13;
int sensorPin = 0;

void setup() {
  Serial.begin( 9600 );
  //pinMode( configPin,OUTPUT );
}

void loop(){
  //digitalWrite(configPin,HIGH);
  delay(120);

  float sensorvalue = analogRead( sensorPin );
  float inchvalue = ( 254.0/1024.0 ) * 2.0 * sensorvalue;

  if( inchvalue <= 90 ){
    Serial.println( inchvalue );
  }
  
  delay( 500 );
  digitalWrite( configPin, LOW );
  delay( 500 );
}