#ifndef ELEMENTS_H
#define ELEMENTS_H

#include <Arduino.h>
#include "globals.h"

#define AMOUNT_OF_POWER_UPS                     24

#define POWER_UP_ONE                            0
#define POWER_UP_TWO                            1
#define POWER_UP_THREE                          2
#define POWER_UP_FOUR                           3
#define POWER_UP_FIVE                           4
#define POWER_UP_SIX                            5
#define POWER_UP_SEVEN                          6
#define POWER_UP_EIGHT                          7
#define POWER_UP_NINE                           8
#define POWER_UP_TEN                            9
#define POWER_UP_ELEVEN                         10
#define POWER_UP_TWELVE                         11
#define POWER_UP_THIRTEEN                       12
#define POWER_UP_FOURTEEN                       13
#define POWER_UP_FIFTEEN                        14
#define POWER_UP_SIXTEEN                        15
#define POWER_UP_SEVENTEEN                      16
#define POWER_UP_EIGHTEEN                       17
#define POWER_UP_NINETEEN                       18
#define POWER_UP_TWENTY                         19
#define POWER_UP_TWENTY_ONE                     20
#define POWER_UP_TWENTY_TWO                     21
#define POWER_UP_TWENTY_THREE                   22
#define POWER_UP_TWENTY_FOUR                    23

struct PowerUps
{
  public:
    int x;
    int y;
    byte type;

    void set()
    {
      x = 58;
      y = 26;
    }
};

PowerUps powerUp;

void drawPowerUp()
{
  //test
  sprites.drawPlusMask(powerUp.x, powerUp.y, powerUpsBorder_plus_mask, 0);
  sprites.drawSelfMasked(powerUp.x+3, powerUp.y+3, powerUps, powerUp.type);
}

#endif
