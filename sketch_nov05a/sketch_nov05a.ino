#include <Adafruit_NeoPixel.h>

#include <avr/power.h>


#define PIN            13

#define NUMPIXELS      8


Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);


void setup() {

  pixels.begin();

}


void loop() {

  pixels.setPixelColor(1, pixels.Color(4, 225,0 ));

  pixels.show();

void loop() {

  pixels.setPixelColor(2, pixels.Color( 0, 67, 225));

  pixels.show();
  
void loop() {

  pixels.setPixelColor(3, pixels.Color(4, 225, 0));

  pixels.show();
  
void loop() {

  pixels.setPixelColor(4, pixels.Color(0, 67, 225));

  pixels.show();
  
void loop() {

  pixels.setPixelColor(5, pixels.Color(4,225, 0));

  pixels.show();
}
