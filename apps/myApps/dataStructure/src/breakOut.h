#pragma once
#ifndef _BREAKOUT_H
#define _BREAKOUT_H
#define BALLRADIUS 15

typedef struct {
	int ballX, ballY;
	int ballDirX, ballDirY;
	int ballSpeed;
} Brick;

void initGame();
void moveBall();
void drawBall();
void bounceBall();
#endif