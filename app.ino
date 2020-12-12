#include <Adafruit_NeoPixel.h>

int data_pin = 6; 
int led_count = 150; //Define the number of leds on the strip
int led_brightness = 100; //Set the brightness of the strip (max: 255)

//Define the led strip
Adafruit_NeoPixel strip(led_count, data_pin, NEO_GRBW + NEO_KHZ800);

void setup(){
    //Initialize the led strip
    strip.begin();
    strip.show();
	
    Serial.begin(9600);
}

void loop(){
	if(Serial.available() >= led_count){

    }
}
