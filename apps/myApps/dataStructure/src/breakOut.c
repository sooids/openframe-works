#include "ofApp.h"
#include "breakOut.h"

Brick game;

void initGame() {
	game.ballX = ofGetWidth() / 2;
	game.ballY = ofGetHeight() / 2;
	game.ballDirX = game.ballDirY = game.ballSpeed = 10;
}

void moveBall() {
	game.ballX += game.ballDirX;
	game.ballY += game.ballDirY;
	
	bounceBall();
}

void bounceBall() {
	if (game.ballX < BALLRADIUS || game.ballX > ofGetWidth() - BALLRADIUS) game.ballDirX *= -1;
	if (game.ballY < BALLRADIUS || game.ballY > ofGetHeight() - BALLRADIUS) game.ballDirY *= -1;
}

void drawBall() {
	ofFill();
	ofSetColor(ofColor::black);
	ofDrawCircle(game.ballX, game.ballY, BALLRADIUS);
}