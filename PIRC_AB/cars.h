#ifndef PLAYER_H
#define PLAYER_H

#include <Arduino.h>
#include "globals.h"

#define CAR_TYPE_ONE                 0
#define CAR_TYPE_TWO                 3
#define CAR_TYPE_THREE               6
#define CAR_TYPE_FOUR                9
#define CAR_TYPE_FIVE                12
#define CAR_TYPE_SIX                 15

byte carTypes[] = {CAR_TYPE_ONE, CAR_TYPE_TWO, CAR_TYPE_THREE, CAR_TYPE_FOUR, CAR_TYPE_FIVE, CAR_TYPE_SIX};

byte playerFrame = 0;

struct Players
{
  public:
    int x;
    int y;
    byte type;
    byte frame;
    byte life;
    byte speed;
    byte speed_cnt;

    void set()
    {
      x = 16;
      y = 28;
      type = 0;
      frame = 0;
      life = 3;
      speed = 0;
      speed_cnt = 0;
    }
};

Players player;

void drawPlayer()
{
  sprites.drawPlusMask(player.x, player.y, cars_plus_mask, player.frame);
}

#endif
