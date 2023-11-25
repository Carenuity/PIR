#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define OLED_RESET 0 // Corresponds to GPIO0 on ESP32C3
Adafruit_SSD1306 display(OLED_RESET);

const int PIR = 7;
int PIRState = LOW; // Set the initial state of PIR to LOW
 
void setup() 
{
  Serial.begin(9600);
  Wire.begin();
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.setTextColor(WHITE);
  delay(2000);
 
  pinMode(PIR, INPUT);
}
 
void loop() 
{
  // intialize by Clearing the display.
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);

  
  PIRState = digitalRead(PIR);
 
  if (PIRState == HIGH) 
  {
    display.setCursor(35, 8);
    display.print("P.detector");
    display.setCursor(35, 20);
    display.println("INTRUDER!");
    display.display();
  } 
  else 
  {
    display.clearDisplay();
    display.setTextSize(1);
    display.setCursor(35, 8);
    display.print("P.detector");
    display.setCursor(35, 20);
    display.println("No motion");
    display.display();
  }
  
  delay(1000);
}
