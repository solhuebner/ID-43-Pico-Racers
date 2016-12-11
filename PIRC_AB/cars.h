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

#define CAR_WIDTH                    16
#define CAR_HEIGHT                   8

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
    boolean isMoveUp;
    boolean isMoveDown;
    boolean isSlow;
    boolean isSlowest;
    boolean isClash;
    Rect rect;

    void set()
    {
      x = 16;
      y = 28;
      type = 0;
      frame = 0;
      life = 3;
      speed = 0;
      speed_cnt = 0;
      isMoveUp = true;
      isMoveDown = true;
      isSlow = false;
      isSlowest = false;
      isClash = false;
      rect.x = x;
      rect.y = y;
      rect.width = CAR_WIDTH;
      rect.height = CAR_HEIGHT;
    }
};

Players player;

void drawPlayer()
{
  sprites.drawPlusMask(player.x, player.y, cars_plus_mask, player.frame);
}

struct Enemys
{
  public:
    int x;
    int y;
    Rect rect;

    void set()
    {
      x = 128;
      y = 28;
      rect.x = x;
      rect.y = y;
      rect.width = CAR_WIDTH;
      rect.height = CAR_HEIGHT;
    }
};

Enemys enemy;

void drawEnemy()
{
  //test
  sprites.drawPlusMask(enemy.x, enemy.y, cars_plus_mask, 1);
}

#endif
