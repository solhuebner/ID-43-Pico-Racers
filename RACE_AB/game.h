#ifndef GAME_H
#define GAME_H

#include <Arduino.h>
#include "globals.h"
#include "inputs.h"
#include "cars.h"
#include "elements.h"


void stateGamePrepareLevel()
{
  level = 1;
  scorePlayer = 0; 
  gameState = STATE_GAME_NEXT_LEVEL;
};


void stateGameNextLevel()
{
  gameState = STATE_GAME_PLAYING;
  player.set();
};


void stateGamePlaying()
{
  checkInputs();
  drawPlayer();
};

void stateGamePause()
{
  if (buttons.justPressed(A_BUTTON)) gameState = STATE_GAME_PLAYING;
};

void stateGameOver()
{
  
};



#endif
