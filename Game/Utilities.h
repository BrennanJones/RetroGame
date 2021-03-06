#ifndef UTILITIES_H
#define UTILITIES_H

#include "Direction.h"
#include "Enemy.h"
#include "Environment.h"
#include "Player.h"
#include "Stair.h"

// Detect whether a collision occurred between the player and an enemy
bool playerOnStairs(Player player, Stair stair);

// Check whether a player or enemy can move in a given direction
bool canMoveDirection(int x, int y, Environment environment, int direction);

bool isInCentreOfCell(int x, int y);
bool isInCentreOrEdgeOfCell(int x, int y);

#endif
