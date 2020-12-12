#include <Adafruit_NeoPixel.h>

int data_pin = 6; //Define the data pin that will be used on the arduino
int led_count = 150; //Define the number of leds on the strip
int led_brightness = 100; //Set the brightness of the strip (max: 255)

int channel_array[led_count][3];


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
        read_serial();
        write_serial();
    }
}

//This function will read all of the values from the serial connection to vixen lights and put the valued into the array
void read_serial(){

}

//This function will take the values from the array and write them to the neopixel strip
void write_strip(){

}
