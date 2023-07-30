#include <Wire.h>//oled
#include <Adafruit_GFX.h>//oled
#include <Adafruit_SSD1306.h>
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels


#define OLED_RESET -1




#include "AM232X.h"//temp sensor
AM232X AM2320;
// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

int gasPin = A0;
const int pingPin = A1; // Trigger Pin of Ultrasonic Sensor
const int echoPin = A2;

void setup() {
  Serial.begin(9600);
   if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
 Serial.println(F("SSD1306 allocation failed"));
 for(;;); //
 }
 display.display();
 display.clearDisplay(); 
  Serial.begin(115200);
  Serial.println(__FILE__);
  Serial.print("LIBRARY VERSION: ");
  Serial.println(AM232X_LIB_VERSION);
  Serial.println();

  if (! AM2320.begin() )
  {
    Serial.println("Sensor not found");
    while (1);
  }
  AM2320.wakeUp();
  delay(2000);

  // sensor only returns one decimal.
  Serial.println();
  Serial.println("Read:\t");

  int status = AM2320.read();
  switch (status)
  {
    case AM232X_OK:
      Serial.println("OK");
      break;
    default:
      Serial.println(status);
      break;
  }


//temp and humid setup
  Serial.print("Temperature:\t");
  Serial.println(AM2320.getTemperature(), 1);
  Serial.print("   Humidity:\t");
  Serial.println(AM2320.getHumidity(), 1);

  Serial.println();
  Serial.println("GET SENSOR INFO (experimental)");
  Serial.print("  Model:\t");
  Serial.println(AM2320.getModel());
  Serial.print("Version:\t");
  Serial.println(AM2320.getVersion());
  Serial.print("  DevId:\t");
  Serial.println(AM2320.getDeviceID());

  Serial.println();
  Serial.println("GET REGISTERS (experimental)");
  Serial.print(" Status:\t");
  Serial.println(AM2320.getStatus());
  Serial.print("  UserA:\t");
  Serial.println(AM2320.getUserRegisterA());
  Serial.print("  UserB:\t");
  Serial.println(AM2320.getUserRegisterB());

  Serial.println();
  Serial.println("SET REGISTERS (experimental)");
  AM2320.setStatus(42);
  Serial.print("Status   42  ==> ");
  Serial.println(AM2320.getStatus());
  AM2320.setUserRegisterA(1234);
  Serial.print("UserA   1234 ==> ");
  Serial.println(AM2320.getUserRegisterA());
  AM2320.setUserRegisterB(5678);
  Serial.print("UserB   5678 ==> ");
  Serial.println(AM2320.getUserRegisterB());

  Serial.println("done...\n");
}

void loop() //start of loop
{
  int gasValue = analogRead(gasPin);

  if (gasValue >= 250)
  {
    Serial.print("Gas Sensor Value: ");
    Serial.println(gasValue);
    Serial.println("Gas Detected!!");
  }
  else
  {
    Serial.print("Gas Sensor Value: ");
    Serial.println(gasValue);
  }

display.fillRect(0,0,128,64,WHITE); //start OLED

//OLED Temp
 display.setTextColor(BLACK);
 display.setTextSize(1);
 display.setCursor(5,5);
 display.print(AM2320.getTemperature(), 1);
 //celcius only
  display.cp437(true);
  display.write(167);
  display.setTextSize(1);
  display.print("C");
display.display();


//gas value to OLED
  if (gasValue >= 1000)
  {
 display.setTextColor(BLACK);
 display.setTextSize(2);
 display.setCursor(5,23);
 display.print("HAZARDOUS");
 display.setTextSize(2);
 display.setCursor(19,45);
 display.print("GAS!!");
 display.display();
  }
  else{
 display.setTextColor(BLACK);
 display.setTextSize(2);
 display.setCursor(5,23);
 display.print("SAFE");
 display.setTextSize(2);
 display.setCursor(19,45);
 display.print("LEVELS!!");
 display.display();}
  







//code for temp/humid
 delay(2000);

  int status = AM2320.read();
  switch (status)
  {
    case AM232X_OK:
      Serial.println("OK");
      break;
    default:
      Serial.println(status);
      break;
  }
  Serial.print("Temp:\t");
  Serial.println(AM2320.getTemperature(), 1);
  Serial.print("Hum:\t");
  Serial.println(AM2320.getHumidity(), 1);

//OLED temp
display.cp437(true);
  display.write(167);
  display.setTextSize(1);
  display.print("C");






//for ultrasound sensor
  long duration, inches, cm;
   pinMode(pingPin, OUTPUT);
   digitalWrite(pingPin, LOW);
   delayMicroseconds(2);
   digitalWrite(pingPin, HIGH);
   delayMicroseconds(10);
   digitalWrite(pingPin, LOW);
   pinMode(echoPin, INPUT);
   duration = pulseIn(echoPin, HIGH);
   inches = microsecondsToInches(duration);
   cm = microsecondsToCentimeters(duration);
   Serial.print(inches);
   Serial.print("in, ");
   Serial.print(cm);
   Serial.print("cm");
   Serial.println();
   delay(100);
   
  } //end of loop




  



//calculations for distance
long microsecondsToInches(long microseconds) {
   return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds) {
   return microseconds / 29 / 2;
}