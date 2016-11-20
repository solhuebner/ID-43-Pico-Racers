#ifndef INPUTS_H
#define INPUTS_H

#include <Arduino.h>
#include "globals.h"
#include "cars.h"
#include "road.h"

void checkInputs()
{
  player.frame = carTypes[player.type] + 1;

  
//  if (player.speed > 0)
//  {    
    if (arduboy.pressed(UP_BUTTON) && (player.y > GAME_TOP))
    {
      if (player.coll_top == 0) {
        player.frame = carTypes[player.type];
        player.y--;
      }
    }
    if (arduboy.pressed(DOWN_BUTTON) && (player.y < GAME_BOTTOM))
    {
      if (player.coll_bottom == 0) {
        player.frame = carTypes[player.type] + 2;
        player.y++;
      }      
    }
    player.rect.y = player.y;
//  }

  if (arduboy.pressed(A_BUTTON))
  {
    if (player.speed < 6 && player.speed_cnt == 0 && player.coll_front == 0)
    {
      //player.speed = 1;
      player.speed++;
      player.speed_cnt = 20;
    }
    if (player.speed_cnt > 0)
    {
      player.speed_cnt--;
    }
  }

  if (arduboy.notPressed(A_BUTTON))
  {
    if (player.speed > 0 && player.speed_cnt == 0)
    {
      player.speed--;
      player.speed_cnt = 15;
    }
    if (player.speed_cnt > 0)
    {
      player.speed_cnt--;
    }
  }

  if (player.coll_front == 1)
  {
    player.speed = 0;
    player.speed_cnt = 0;
  }

  if (arduboy.justPressed(B_BUTTON))
  {
    player.type++;
    if (player.type > 5) player.type = 0;
  }
}


#endif
