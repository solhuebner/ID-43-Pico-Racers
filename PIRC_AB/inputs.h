#ifndef INPUTS_H
#define INPUTS_H

#include <Arduino.h>
#include "globals.h"
#include "cars.h"

void checkInputs()
{
  player.frame = carTypes[player.type] + 1;

  // collision test
  car_rect.x = player.x;
  car_rect.y = player.y;
  car_rect.width = 16;
  car_rect.height = 8;
  
  if (arduboy.pressed(UP_BUTTON) && (player.y > GAME_TOP)){
    if(!arduboy.collisionRoad(car_rect, -1)){
      player.frame = carTypes[player.type];
      player.y--;
    }else{
      player.y++;
    }
  }
  
  if (arduboy.pressed(DOWN_BUTTON) && (player.y < GAME_BOTTOM)){
    if(!arduboy.collisionRoad(car_rect, 1)){
      player.frame = carTypes[player.type] + 2;
      player.y++;
    }else{
      player.y--;
    }
  }

  if (arduboy.justPressed(A_BUTTON)) gameState = STATE_GAME_PAUSE;
  if (arduboy.justPressed(B_BUTTON))
  {
    player.type++;
    if (player.type > 5) player.type = 0;
  }
}


#endif
