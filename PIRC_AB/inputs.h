#ifndef INPUTS_H
#define INPUTS_H

#include <Arduino.h>
#include "globals.h"
#include "cars.h"
#include "road.h"

void upCar(uint8_t yy)
{
  player.frame = carTypes[player.type];
  player.y = player.y - yy;
}

void downCar(uint8_t yy)
{
  player.frame = carTypes[player.type] + 2;
  player.y = player.y + yy;
}

void checkInputs()
{
  player.frame = carTypes[player.type] + 1;
  
  if (player.speed > 0)
  {    
    if (arduboy.pressed(UP_BUTTON) && (player.y > GAME_TOP))
    {
      if (player.isMoveUp) {
        upCar(1);
      }
    }
    if (arduboy.pressed(DOWN_BUTTON) && (player.y < GAME_BOTTOM))
    {
      if (player.isMoveDown) {
        downCar(1);
      }      
    }
  }

  if (arduboy.pressed(A_BUTTON))
  {
    if (player.speed < 6 && player.speed_cnt == 0)
    {
      player.speed_cnt = 20;
      
      if (!player.isSlow && !player.isSlowest) 
      {
        player.speed++;
      }
      else
      {
        if (player.isSlowest) 
        {
          player.speed = 1;
        } 
        else
        if (player.isSlow) 
        {
          player.speed = 2;
        } 
      }
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

  if (player.isSlowest)
  {
    if (player.speed > 1 && player.speed_cnt == 0)
    {
      player.speed--;
      player.speed_cnt = 40;
    }
    if (player.speed_cnt > 0)
    {
      player.speed_cnt--;
    }
  }  
  else
  if (player.isSlow)
  {
    if (player.speed > 2 && player.speed_cnt == 0)
    {
      player.speed--;
      player.speed_cnt = 40;
    }
    if (player.speed_cnt > 0)
    {
      player.speed_cnt--;
    }
  }
  
  if (arduboy.justPressed(B_BUTTON))
  {
    player.type++;
    if (player.type > 5) player.type = 0;
  }

  player.rect.y = player.y;
}

#endif
