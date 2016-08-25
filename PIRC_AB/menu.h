#ifndef MENU_H
#define MENU_H

#include <Arduino.h>
#include "globals.h"

byte moveOnY[] = {0, 1, 2, 1};
byte moveOnYFrame = 0;
byte lineFrame = 0;

void titleScreen()
{
  sprites.drawSelfMasked(43, 4, racer, 0);
  sprites.drawSelfMasked(8, 9, pico, 0);
}

void titleRoad()
{
  if (arduboy.everyXFrames(12)) moveOnYFrame = (++moveOnYFrame) % 4;
  if (arduboy.everyXFrames(1)) lineFrame = (++lineFrame) % 32;
  for (byte i = 0; i < 5; i++) sprites.drawSelfMasked(8 + (33 * i) - lineFrame , 45, roadLine, 0);
  sprites.drawSelfMasked(23, 34, bigCarSmokeOne, moveOnYFrame);
  sprites.drawSelfMasked(23, 48, bigCarSmokeTwo, moveOnYFrame);
  for (byte i = 0; i < 6; i++)sprites.drawOverwrite(35 + (7 * i), 42, roadMask, 0);
  sprites.drawSelfMasked(36, 33 + moveOnY[moveOnYFrame], bigCar, 0);
}

void stateMenuIntro()
{
  globalCounter++;
  for (byte i = 0; i < 4; i++) sprites.drawSelfMasked(32 * i, 10, TEAMarg, i);
  sprites.drawSelfMasked(43, 50, TEAM_argPart5, 0);
  if (globalCounter > 180)
  {
    globalCounter = 0;
    gameState = STATE_MENU_MAIN;
  }
}

void stateMenuMain()
{
  titleScreen();
  titleRoad();
  /*
    for (byte i = 0; i < 4; i++)
    {
    {
      if (((2 + i) - menuSelection) != 0)
      {
        sprites.drawSelfMasked(21 + (22 * i), 60, menuText, i);
      }
      if (((2 + i) - menuSelection) == 0) sprites.drawSelfMasked(21 + (22 * i), 56, menuText, i);
    }
    }
  */

  for (byte i = 0; i < 4; i++)
  {
    if (((2 + i) - menuSelection) != 0) sprites.drawSelfMasked(108, 16 + (9 * i), menuText, i);
    if (((2 + i) - menuSelection) == 0) sprites.drawSelfMasked(105, 16 + (9 * i), menuText, i);
  }

  if (arduboy.justPressed(DOWN_BUTTON) && (menuSelection < 5)) menuSelection++;
  if (arduboy.justPressed(UP_BUTTON) && (menuSelection > 2)) menuSelection--;
  if (arduboy.justPressed(B_BUTTON)) gameState = menuSelection;
}

void stateMenuHelp()
{
  arduboy.drawBitmap(32, 0, qrcode, 64, 64, WHITE);
  if (arduboy.justPressed(A_BUTTON | B_BUTTON)) gameState = STATE_MENU_MAIN;
}


void stateMenuInfo()
{
  titleScreen();
  if (arduboy.justPressed(A_BUTTON | B_BUTTON)) gameState = STATE_MENU_MAIN;
}

void stateMenuSoundfx()
{
  if (arduboy.justPressed(DOWN_BUTTON)) arduboy.audio.on();
  if (arduboy.justPressed(UP_BUTTON)) arduboy.audio.off();
  if (arduboy.justPressed(A_BUTTON | B_BUTTON))
  {
    arduboy.audio.saveOnOff();
    gameState = STATE_MENU_MAIN;
  }
}

void stateMenuPlay()
{
  scorePlayer = 0;
  gameState = STATE_GAME_PREPARE_LEVEL;
}

#endif
