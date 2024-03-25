#include <Arduino.h>
#include <Adafruit_GFX.h>
#include <Adafruit_ILI9341.h>

// Reference project https://wokwi.com/projects/342032431249883731

#define BTN_PIN 5
#define TFT_DC 2
#define TFT_CS 15
Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC);

void setup()
{
  Serial.begin(115200);
  pinMode(BTN_PIN, INPUT_PULLUP);

  tft.begin();
  tft.setRotation(1);

  tft.setTextColor(ILI9341_WHITE);
  tft.setTextSize(2);
  tft.print("Starting the pomodoro!!");

  Serial.println("Setup done!!!");
}

void loop()
{
  
}