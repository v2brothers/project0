// NeoPixel Ring simple sketch (c) 2013 Shae Erisson
// Released under the GPLv3 license to match the rest of the
// Adafruit NeoPixel library

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
 #include <avr/power.h> // Required for 16 MHz Adafruit Trinket
#endif


// Which pin on the Arduino is connected to the NeoPixels?
#define PIN        2 // On Trinket or Gemma, suggest changing this to 1

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS 10 // Popular NeoPixel ring size

// When setting up the NeoPixel library, we tell it how many pixels,
// and which pin to use to send signals. Note that for older NeoPixel
// strips you might need to change the third parameter -- see the
// strandtest example for more information on possible values.
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

#define DELAYVAL 500 // Time (in milliseconds) to pause between pixels

void setup() {
  Serial.begin(115200);
  // These lines are specifically to support the Adafruit Trinket 5V 16 MHz.
  // Any other board, you can remove this part (but no harm leaving it):
#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
#endif
  // END of Trinket-specific code.

  pixels.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)
  //pixels.clear(); // Set all pixel colors to 'off'
  //pixels.show();
}

      void loop(){

  pixels.clear();
  pixels.show();
  delay(700);
   showAlternateLed(0, 255, 0, 0);
  delay(500);
  pixels.clear();
  pixels.show();
  delay(500);
  ShowSecondNote(0, 0, 255, 0);
  ShowSecondNote(1, 0, 0, 255);
  ShowSecondNote(0, 13, 255, 239);
  delay(1000);
    ShowSecondNote(0, 0, 255, 0);
  ShowSecondNote(1, 0, 0, 255);
  ShowSecondNote(0, 255, 0, 0);
  delay(1400);
   ShowSecondNote(0, 0, 255, 0);
  ShowSecondNote(1, 0, 0, 255);
  for(int i=0; i<10;i++)
  pixels.setPixelColor(i, 255, 0, 0);
  pixels.show();
  delay(4000);
  
  }

void showAlternateLed(int startNum, int r, int g, int b)
{
    pixels.clear(); // Set all pixel colors to 'off'
    pixels.show();
  
    for(int i=startNum; i<NUMPIXELS; i++) 
    { // For each pixel...
      Serial.println(i);
      pixels.setPixelColor(i, pixels.Color(r, g, b));
      i = i + 1;
    }

    pixels.show();
  
}

void showReverseLed(int r, int g, int b)
{
    pixels.clear(); // Set all pixel colors to 'off'
    pixels.show();
  
    for(int i=NUMPIXELS-1; i>=0; i--) 
    { // For each pixel...
      Serial.println(i);
      // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
      // Here we're using a moderately bright green color:
      pixels.setPixelColor(i, pixels.Color(r, g, b));
    }

    pixels.show();
  
}

void ShowSecondNote(int Snum, int r, int g, int b)
{
  showAlternateLed(Snum, r, g, b);
    delay(400);
    pixels.clear();
    pixels.show();
    delay(100);  
}
