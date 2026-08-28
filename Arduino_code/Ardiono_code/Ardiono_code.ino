

//DHT11 Sensor With LCD
#include <DHT.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2) ;

#define DHT11_PIN 13
DHT dht(DHT11_PIN,DHT11)              ;

// Pin Definitions for mosfets
const int mosfetGatePins[] = {A0, A1, A2, A3, A4, A5}   ;  // Arduino analog pins connected to MOSFET gates
const int numMOSFETs       = sizeof (mosfetGatePins[0]) ;

//Set the Fan/Relay pin
const int relayPin = 8; 


void setup()
{
  lcd.begin (16, 2)             ;
  lcd.print ("Initializing...") ;
  dht.begin ()                  ;


 //relay
  pinMode      (relayPin,OUTPUT) ;
  digitalWrite (relayPin,LOW)    ;

//mosfet
 for (int i = 0; i < numMOSFETs; i++) 
{
    pinMode      (mosfetGatePins[i], OUTPUT) ;
    digitalWrite (mosfetGatePins[i], LOW)    ; 
}
  // Print initial message on the LCD
  lcd.setCursor (0, 1)               ;
  lcd.print     ("Humidifier Ready") ;
  delay         (2000)               ;
  lcd.clear     ()                   ;
}

 void loop()
{
  float temperature = dht.readTemperature() ;
  float humidity    = dht.readHumidity   () ;
  
  //check for reading error
  
  lcd.clear     ()             ;
  lcd.setCursor (0,0)          ;  
  lcd.print     ("Temp: ")     ;
  lcd.print     (temperature)  ;
  lcd.print     ("C")          ;
  lcd.setCursor (0,1)          ;
  lcd.print     ("Humidity: ") ;
  lcd.print     (humidity)     ;
  lcd.print     ("%")          ;
  delay(2000);

  // Control the buzzer based on humidity
  // Loop through each MOSFET and control it
   
    if (humidity > 80.0) 
{
    // Turn on the MOSFET (MOSFET on)
    for (int i = 0; i < numMOSFETs; i++) 
{
    digitalWrite(mosfetGatePins[i], HIGH) ;
    delay       (1000)                    ; // Keep MOSFET on for 5 seconds
} 
    
     //Turn On the Fan
    digitalWrite(8,HIGH)                  ; 

} else 
{
      for (int i = 0; i < numMOSFETs; i++) 
{

    // Turn off the MOSFET (MOSFET off)
    digitalWrite(mosfetGatePins[i], LOW) ;
    
}
    digitalWrite(8,LOW);  //Turn Off the Fan
}
    delay(2000);
}