#ifndef TRACK_H
#define TRACK_H

#include <Arduino.h>
#include "globals.h"
#include "road.h"

#define TOTAL_AMOUNT_OF_LEVELS  2
#define TOTAL_AMOUNT_OF_ROADPARTS   1

void drawTheRoad()
{
  
  // scroll test
  // collision test
  car_rect.x = player.x;
  car_rect.y = player.y;
  car_rect.width = 16;
  car_rect.height = 6;
  arduboy.scrollRoad(car_rect);
}


void roadPart000()
{
  
}

typedef void (*FunctionPointer) ();
const FunctionPointer PROGMEM Levels[TOTAL_AMOUNT_OF_LEVELS][TOTAL_AMOUNT_OF_ROADPARTS] =
{
  { //TRACK 01
    roadPart000,
  },
  { //TRACK 02
    roadPart000,
  },
};

#endif
