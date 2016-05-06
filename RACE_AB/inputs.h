#ifndef INPUTS_H
#define INPUTS_H

#include <Arduino.h>
#include "globals.h"
#include "cars.h"

void checkInputs()
{
  player.frame = carTypes[player.type] + 1;

  if (buttons.pressed(UP_BUTTON) && (player.y > GAME_TOP))
  {
    player.frame = carTypes[player.type];
    player.y--;
  }
  if (buttons.pressed(DOWN_BUTTON) && (player.y < GAME_BOTTOM))
  {
    player.frame = carTypes[player.type] + 2;
    player.y++;
  }

  if (buttons.justPressed(A_BUTTON)) gameState = STATE_GAME_PAUSE;
  if (buttons.justPressed(B_BUTTON))
  {
    player.type++;
    if (player.type > 5) player.type = 0;
  }
}


#endif
