#include <Arduino.h>
  #define LILYGO_WATCH_2019_WITH_TOUCH
#include <LilyGoWatch.h>

TTGOClass *ttgo;

void setup()
{
    Serial.begin(115200);
    ttgo = TTGOClass::getWatch();
    ttgo->begin();
    ttgo->openBL();

    ttgo->tft->fillScreen(TFT_SKYBLUE);
    ttgo->tft->setTextColor(TFT_RED, TFT_SKYBLUE);
    ttgo->tft->setTextFont(4);
    ttgo->tft->drawString("Mohan",  80, 90);
    ttgo->tft->drawString("Pushadapu", 60,120);
}

void loop()
{ 
}
