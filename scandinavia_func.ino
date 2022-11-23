#include <FastLED.h>

FASTLED_USING_NAMESPACE

// FastLED "100-lines-of-code" demo reel, showing just a few
// of the kinds of animation patterns you can quickly and easily
// compose using FastLED.
//
// This example also shows one easy way to define multiple
// animations patterns and have them automatically rotate.
//
// -Mark Kriegsman, December 2014


#define DATA_PIN    3
//#define CLK_PIN   4
#define LED_TYPE    WS2811
#define COLOR_ORDER GRB
#define NUM_LEDS    64
CRGB leds[NUM_LEDS];

#define BRIGHTNESS          20
#define FRAMES_PER_SECOND  120


void setup() {
  // put your setup code here, to run once:
  delay(3000); // 3 second delay for recovery

  Serial.begin(9600);
  // tell FastLED about the LED strip configuration
  FastLED.addLeds<LED_TYPE, DATA_PIN, COLOR_ORDER>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);
  //FastLED.addLeds<LED_TYPE,DATA_PIN,CLK_PIN,COLOR_ORDER>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);

  // set master brightness control
  FastLED.setBrightness(BRIGHTNESS);

}

void loop() {
  //--SUNRISE--
  //--rise0--
  for (int k = 0; k < 255; k++)
  {

    changeColor('sky', 0, 0, 0, 0, 0, 204, k, 255);
    changeColor('Sunrise', 0, 0, 0, 100, 0, 0, k, 255);
    FastLED.show();
    FastLED.delay(40);
  }
  //--rise1--
  for (int k = 0; k < 255; k++)
  {
    changeColor('sky', 0, 0, 204, 100, 100, 255, k, 255);
    changeColor('Sunrise', 100, 0, 0, 255, 0, 0, k, 255);
    changeColor('RM', 0, 0, 0, 0, 100, 100, k, 255);    //Rghit Mountain
    changeColor('RT', 0, 0, 0, 0, 100, 0, k, 255);     //Rghit Trail
    changeColor('MM', 0, 0, 0, 0, 100, 100, k, 255);    //Midle Mountain
    changeColor('LT', 0, 0, 0, 0, 100, 0, k, 255);     //Left Trail
    changeColor('LM', 0, 0, 0, 0, 100, 100, k, 255);    //Left Mountain
    FastLED.show();
    FastLED.delay(40);
  }
  //--rise2--
  for (int k = 0; k < 255; k++)
  {
    changeColor('sky', 100, 100, 255, 0, 0, 255, k, 255);
    changeColor('Sunrise', 255, 0, 0, 0, 0, 255, k, 255);
    changeColor('SunriseUp', 100, 100, 255, 255, 0, 0, k, 255);
    changeColor('RM', 0, 100, 100, 0, 200, 200, k, 255);
    changeColor('RT', 0, 100, 0, 0, 200, 0, k, 255);
    changeColor('MM', 0, 100, 100, 0, 200, 200, k, 255);
    changeColor('LT', 0, 100, 0, 0, 200, 0, k, 255);
    changeColor('LM', 0, 100, 100, 0, 200, 200, k, 255);
    FastLED.show();
    FastLED.delay(40);
  }
  //--DAY--
  //--rise3--
  for (int k = 0; k < 255; k++)
  {
    changeColor('sky', 0, 0, 255, 0, 0, 255, k, 255);
    changeColor('Sunrise', 0, 0, 255, 0, 0, 255, k, 255);
    changeColor('SunriseUp', 255, 0, 0, 0, 0, 255, k, 255);
    changeColor('RM', 0, 200, 200, 200, 200, 200, k, 255); //snow
    changeColor('RT', 0, 200, 0, 0, 255, 0, k, 255); //trees
    changeColor('MM', 0, 200, 200, 200, 200, 200, k, 255); //snow
    changeColor('LT', 0, 200, 0, 0, 255, 0, k, 255); //trees
    changeColor('LM', 0, 200, 200, 200, 200, 200, k, 255); //snow
    FastLED.show();
    FastLED.delay(40);
  }
  //--rise4--
  for (int k = 0; k < 255; k++)
  {
    changeColor('sky', 0, 0, 255, 0, 0, 255, k, 255);
    changeColor('Sunrise', 0, 0, 255, 0, 0, 255, k, 255);
    changeColor('SunriseUp', 0, 0, 255, 0, 0, 255, k, 255);
    changeColor('RM', 200, 200, 200, 200, 200, 200, k, 255);
    changeColor('RT', 0, 200, 0, 0, 255, 0, k, 255);
    changeColor('MM', 200, 200, 200, 200, 200, 200, k, 255);
    changeColor('LT', 0, 200, 0, 0, 255, 0, k, 255);
    changeColor('LM', 200, 200, 200, 200, 200, 200, k, 255);
    FastLED.show();
    FastLED.delay(40);
  }
  //--SUNDOWN--
  //--rise5--
  for (int k = 0; k < 255; k++)
  {
    changeColor('sky', 0, 0, 255, 200, 100, 0, k, 255);
    changeColor('Sunrise', 0, 0, 255, 200, 100, 0, k, 255);
    changeColor('SunriseUp', 0, 0, 255, 200, 100, 0, k, 255);
    changeColor('RM', 200, 200, 200, 100, 0, 150, k, 255);
    changeColor('RT', 0, 255, 0, 100, 200, 0, k, 255);
    changeColor('MM', 200, 200, 200, 100, 0, 150, k, 255);
    changeColor('LT', 0, 255, 0, 100, 200, 0, k, 255);
    changeColor('LM', 200, 200, 200, 100, 0, 150, k, 255);
    FastLED.show();
    FastLED.delay(40);
  }
  //--rise6--
  for (int k = 0; k < 255; k++)
  {
    changeColor('sky', 200, 100, 0, 200, 100, 0, k, 255);
    changeColor('Sunrise', 200, 100, 0, 200, 100, 0, k, 255);
    changeColor('SunriseUp', 200, 100, 0, 200, 100, 0, k, 255);
    changeColor('RM', 100, 0, 150, 100, 0, 150, k, 255);
    changeColor('RT', 100, 200, 0, 100, 200, 0, k, 255);
    changeColor('MM', 100, 0, 150, 100, 0, 150, k, 255);
    changeColor('LT', 100, 200, 0, 100, 200, 0, k, 255);
    changeColor('LM', 100, 0, 150, 100, 0, 150, k, 255);
    FastLED.show();
    FastLED.delay(40);
  }
  //--rise7--
  for (int k = 0; k < 255; k++)
  {
    changeColor('sky', 200, 100, 0, 200, 100, 0, k, 255);
    changeColor('Sunrise', 200, 100, 0, 200, 100, 0, k, 255);
    changeColor('SunriseUp', 200, 100, 0, 200, 100, 0, k, 255);
    changeColor('RM', 100, 0, 150, 0, 0, 100, k, 255);
    changeColor('RT', 100, 200, 0, 0, 0, 0, k, 255);
    changeColor('MM', 100, 0, 150, 0, 0, 100, k, 255);
    changeColor('LT', 100, 200, 0, 0, 0, 0, k, 255);
    changeColor('LM', 100, 0, 150, 0, 0, 100, k, 255);
    FastLED.show();
    FastLED.delay(40);
  }
  //--rise8--
  for (int k = 0; k < 255; k++)
  {
    changeColor('sky', 200, 100, 0, 150, 100, 0, k, 255);
    changeColor('Sunrise', 200, 100, 0, 150, 100, 0, k, 255);
    changeColor('SunriseUp', 200, 100, 0, 150, 100, 0, k, 255);
    changeColor('RM', 0, 0, 100, 0, 0, 50, k, 255);
    changeColor('MM', 0, 0, 100, 0, 0, 50, k, 255);
    changeColor('LM', 0, 0, 100, 0, 0, 50, k, 255);
    FastLED.show();
    FastLED.delay(40);
  }
  //--rise9--
  for (int k = 0; k < 255; k++)
  {
    changeColor('sky', 150, 100, 0, 100, 50, 0, k, 255);
    changeColor('Sunrise', 150, 100, 0, 100, 50, 0, k, 255);
    changeColor('SunriseUp', 150, 100, 0, 100, 50, 0, k, 255);
    changeColor('RM', 0, 0, 50, 0, 0, 25, k, 255);
    changeColor('MM', 0, 0, 50, 0, 0, 25, k, 255);
    changeColor('LM', 0, 0, 50, 0, 0, 25, k, 255);
    FastLED.show();
    FastLED.delay(40);
  }
  //--rise10--
  for (int k = 0; k < 255; k++)
  {
    changeColor('sky', 100, 50, 0, 0, 0, 0, k, 255);
    changeColor('Sunrise', 100, 50, 0, 0, 0, 0, k, 255);
    changeColor('SunriseUp', 100, 50, 0, 0, 0, 0, k, 255);
    changeColor('RM', 0, 0, 25, 0, 0, 0, k, 255);
    changeColor('MM', 0, 0, 25, 0, 0, 0, k, 255);
    changeColor('LM', 0, 0, 25, 0, 0, 0, k, 255);
    FastLED.show();
    FastLED.delay(40);
  }
  //--rise11--
  for (int k = 0; k < 255; k++)
  {
    changeColor('sky', 0, 0, 0, 0, 0, 0, k, 255);
    changeColor('Sunrise', 0, 0, 0, 0, 0, 0, k, 255);
    changeColor('SunriseUp', 0, 0, 0, 0, 0, 0, k, 255);
    FastLED.show();
    FastLED.delay(40);
  }
  //--NORTH SHINE--
  //--rise12--
  for (int k = 0; k < 255; k++)
  {
    changeColor('northShineLeft', 0, 0, 0, 0, 100, 0, k, 255);
    FastLED.show();
    FastLED.delay(40);
  }
  //--rise13--
  for (int k = 0; k < 255; k++)
  {
    changeColor('northShineLeft', 0, 100, 0, 0, 0, 0, k, 255);
    changeColor('northShineMidle', 0, 0, 0, 0, 100, 0, k, 255);
    FastLED.show();
    FastLED.delay(40);
  }
  //--rise14--
  for (int k = 0; k < 255; k++)
  {
    changeColor('northShineRghit', 0, 0, 0, 0, 100, 0, k, 255);
    changeColor('northShineMidle', 0, 100, 0, 0, 0, 0, k, 255);
    FastLED.show();
    FastLED.delay(40);
  }
  //--rise15--
  for (int k = 0; k < 255; k++)
  {
    changeColor('northShineRghit', 0, 100, 0, 0, 0, 0, k, 255);
    FastLED.show();
    FastLED.delay(40);
  }
  //--rise16--
  for (int k = 0; k < 255; k++)
  {
    changeColor('northShineRghit', 0, 0, 0, 0, 100, 0, k, 255);
    changeColor('northShineMidle', 0, 0, 0, 0, 100, 0, k, 255);
    changeColor('northShineLeft', 0, 0, 0, 0, 100, 0, k, 255);
    FastLED.show();
    FastLED.delay(40);
  }
//  
//  //--rise17--
//  for (int k = 0; k < 255; k++)
//  {
//    changeColor('RM', 0, 0, 0, 0, 0, 0, k, 255);
//    changeColor('MM', 0, 0, 0, 0, 0, 0, k, 255);
//    changeColor('LM', 0, 100, 0, 0, 0, 0, k, 255);
//    FastLED.show();
//    FastLED.delay(40);
//  }
//  //--rise18--
//  for (int k = 0; k < 255; k++)
//  {
//    changeColor('RM', 0, 0, 0, 0, 100, 0, k, 255);
//    changeColor('MM', 0, 0, 0, 0, 100, 0, k, 255);
//    changeColor('LM', 0, 0, 0, 0, 100, 0, k, 255);
//    FastLED.show();
//    FastLED.delay(40);
//  }
//  //--rise19--
//  for (int k = 0; k < 255; k++)
//  {
//    changeColor('RM', 0, 100, 0, 0, 0, 0, k, 255);
//    changeColor('MM', 0, 100, 0, 0, 0, 0, k, 255);
//    changeColor('LM', 0, 100, 0, 0, 0, 0, k, 255);
//    FastLED.show();
//    FastLED.delay(40);
//  }
//  //--rise20--
//  for (int k = 0; k < 255; k++)
//  {
//    changeColor('RM', 0, 0, 0, 0, 100, 0, k, 255);
//    changeColor('MM', 0, 0, 0, 0, 100, 0, k, 255);
//    changeColor('LM', 0, 0, 0, 0, 100, 0, k, 255);
//    FastLED.show();
//    FastLED.delay(40);
//  }
//  //--rise21--
//  for (int k = 0; k < 255; k++)
//  {
//    changeColor('RM', 0, 100, 0, 0, 0, 0, k, 255);
//    changeColor('MM', 0, 100, 0, 0, 0, 0, k, 255);
//    changeColor('LM', 0, 100, 0, 0, 0, 0, k, 255);
//    FastLED.show();
//    FastLED.delay(40);
//  }
//  //--rise22--
//  for (int k = 0; k < 255; k++)
//  {
//    changeColor('MM', 0, 0, 0, 0, 100, 0, k, 255);
//    FastLED.show();
//    FastLED.delay(40);
//  }
//  //--rise23--
//  for (int k = 0; k < 255; k++)
//  {
//    changeColor('RM', 0, 0, 0, 0, 100, 0, k, 255);
//    changeColor('MM', 0, 100, 0, 0, 0, 0, k, 255);
//    FastLED.show();
//    FastLED.delay(40);
//  }
//  //--rise24--
//  for (int k = 0; k < 255; k++)
//  {
//    changeColor('RM', 0, 100, 0, 0, 0, 0, k, 255);
//    changeColor('LM', 0, 0, 0, 0, 100, 0, k, 255);
//    FastLED.show();
//    FastLED.delay(40);
//  }
//  //--rise25--
//  for (int k = 0; k < 255; k++)
//  {
//    changeColor('LM', 0, 100, 0, 0, 0, 0, k, 255);
//    FastLED.show();
//    FastLED.delay(40);
//  }




  //--NIGHT--
  for (int k = 0; k < 255; k++)
  {
    changeColor('sky', 0, 0, 0, 0, 0, 0, k, 255);
    changeColor('Sunrise', 0, 0, 0, 0, 0, 0, k, 255);
    changeColor('SunriseUp', 0, 0, 0, 0, 0, 0, k, 255);
    changeColor('RM', 0, 0, 0, 0, 0, 0, k, 255);
    changeColor('RT', 0, 0, 0, 0, 0, 0, k, 255);
    changeColor('MM', 0, 0, 0, 0, 0, 0, k, 255);
    changeColor('LT', 0, 0, 0, 0, 0, 0, k, 255);
    changeColor('LM', 0, 0, 0, 0, 0, 0, k, 255);
    FastLED.show();
    FastLED.delay(40);
  }
}


void changeColor (int part ,  int rStart, int gStart , int bStart , int rEnd, int gEnd , int bEnd, int Currectframe, int EndFrame)
{
  switch (part)
  {
    case 'Sunrise' :
      for (int i = 18; i < 21; i++)
      {
        leds[i] = CRGB(rStart + (rEnd - rStart) * ((float)Currectframe / (float)EndFrame), gStart + (gEnd - gStart) * ((float)Currectframe / (float)EndFrame), bStart + (bEnd - bStart) * ((float)Currectframe / (float)EndFrame));
      }
      break;
    case 'SunriseUp' :
      for (int i = 3; i <= 6; i++)
      {
        leds[i] = CRGB(rStart + (rEnd - rStart) * ((float)Currectframe / (float)EndFrame), gStart + (gEnd - gStart) * ((float)Currectframe / (float)EndFrame), bStart + (bEnd - bStart) * ((float)Currectframe / (float)EndFrame));
      }
      break;
    case 'sky' :
      for (int i = 0; i <= 17; i++)
      {
        leds[i] = CRGB(rStart + (rEnd - rStart) * ((float)Currectframe / (float)EndFrame), gStart + (gEnd - gStart) * ((float)Currectframe / (float)EndFrame), bStart + (bEnd - bStart) * ((float)Currectframe / (float)EndFrame));
      }
      break;
    case 'RM' :
      for (int i = 21; i <= 25; i++)
      {
        leds[i] = CRGB(rStart + (rEnd - rStart) * ((float)Currectframe / (float)EndFrame), gStart + (gEnd - gStart) * ((float)Currectframe / (float)EndFrame), bStart + (bEnd - bStart) * ((float)Currectframe / (float)EndFrame));
      }
      break;
    case 'RT' :
      for (int i = 25; i < 40; i++)
      {
        leds[i] = CRGB(rStart + (rEnd - rStart) * ((float)Currectframe / (float)EndFrame), gStart + (gEnd - gStart) * ((float)Currectframe / (float)EndFrame), bStart + (bEnd - bStart) * ((float)Currectframe / (float)EndFrame));
      }
      break;
    case 'MM' :
      for (int i = 40; i < 48; i++)
      {
        leds[i] = CRGB(rStart + (rEnd - rStart) * ((float)Currectframe / (float)EndFrame), gStart + (gEnd - gStart) * ((float)Currectframe / (float)EndFrame), bStart + (bEnd - bStart) * ((float)Currectframe / (float)EndFrame));
      }
      break;
    case 'LT' :
      for (int i = 48; i < 59; i++)
      {
        leds[i] = CRGB(rStart + (rEnd - rStart) * ((float)Currectframe / (float)EndFrame), gStart + (gEnd - gStart) * ((float)Currectframe / (float)EndFrame), bStart + (bEnd - bStart) * ((float)Currectframe / (float)EndFrame));
      }
      break;
    case 'LM' :
      for (int i = 59; i <= 63; i++)
      {
        leds[i] = CRGB(rStart + (rEnd - rStart) * ((float)Currectframe / (float)EndFrame), gStart + (gEnd - gStart) * ((float)Currectframe / (float)EndFrame), bStart + (bEnd - bStart) * ((float)Currectframe / (float)EndFrame));
      }
      break;
    case 'northShineLeft' :
      for (int i = 0; i <= 21; i++)
      {
        //leds[i] = CRGB(rStart + (rEnd - rStart) * ((float)Currectframe / (float)EndFrame), gStart + (gEnd - gStart) * ((float)Currectframe / (float)EndFrame), bStart + (bEnd - bStart) * ((float)Currectframe / (float)EndFrame));
        leds[12] = CRGB(rStart + (rEnd - rStart) * ((float)Currectframe / (float)EndFrame), gStart + (gEnd - gStart) * ((float)Currectframe / (float)EndFrame), bStart + (bEnd - bStart) * ((float)Currectframe / (float)EndFrame));
        leds[14] = CRGB(rStart + (rEnd - rStart) * ((float)Currectframe / (float)EndFrame), gStart + (gEnd - gStart) * ((float)Currectframe / (float)EndFrame), bStart + (bEnd - bStart) * ((float)Currectframe / (float)EndFrame));
      }
      break;
    case 'northShineMidle' :
      for (int i = 0; i <= 21; i++)
      {
        leds[5] = CRGB(rStart + (rEnd - rStart) * ((float)Currectframe / (float)EndFrame), gStart + (gEnd - gStart) * ((float)Currectframe / (float)EndFrame), bStart + (bEnd - bStart) * ((float)Currectframe / (float)EndFrame));
        leds[6] = CRGB(rStart + (rEnd - rStart) * ((float)Currectframe / (float)EndFrame), gStart + (gEnd - gStart) * ((float)Currectframe / (float)EndFrame), bStart + (bEnd - bStart) * ((float)Currectframe / (float)EndFrame));
        leds[18] = CRGB(rStart + (rEnd - rStart) * ((float)Currectframe / (float)EndFrame), gStart + (gEnd - gStart) * ((float)Currectframe / (float)EndFrame), bStart + (bEnd - bStart) * ((float)Currectframe / (float)EndFrame));
        leds[19] = CRGB(rStart + (rEnd - rStart) * ((float)Currectframe / (float)EndFrame), gStart + (gEnd - gStart) * ((float)Currectframe / (float)EndFrame), bStart + (bEnd - bStart) * ((float)Currectframe / (float)EndFrame));
      }
      break;
      case 'northShineRghit' :
      for (int i = 0; i <= 21; i++)
      {
        leds[0] = CRGB(rStart + (rEnd - rStart) * ((float)Currectframe / (float)EndFrame), gStart + (gEnd - gStart) * ((float)Currectframe / (float)EndFrame), bStart + (bEnd - bStart) * ((float)Currectframe / (float)EndFrame));
        leds[1] = CRGB(rStart + (rEnd - rStart) * ((float)Currectframe / (float)EndFrame), gStart + (gEnd - gStart) * ((float)Currectframe / (float)EndFrame), bStart + (bEnd - bStart) * ((float)Currectframe / (float)EndFrame));
        leds[2] = CRGB(rStart + (rEnd - rStart) * ((float)Currectframe / (float)EndFrame), gStart + (gEnd - gStart) * ((float)Currectframe / (float)EndFrame), bStart + (bEnd - bStart) * ((float)Currectframe / (float)EndFrame));
      }
      break;
  }

}
