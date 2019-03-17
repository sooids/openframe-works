#include "ofApp.h"
#include "breakOut.h"

Brick game;

void initGame() {
	game.ballX = ofGetWidth() / 2;
	game.ballY = ofGetHeight() / 2;
	game.ballDirX = game.ballDirY = game.ballSpeed = 10;

	game.padX = ofGetWidth() / 2;
	game.padY = ofGetHeight() - 50;
	game.padWidth = 400;
}

void moveBall() {
	game.ballX += game.ballDirX;
	game.ballY += game.ballDirY;
	
	bounceBall();
}

void bounceBall() {
	if (game.ballX < BALLRADIUS || game.ballX > ofGetWidth() - BALLRADIUS) game.ballDirX *= -1;
	// if (game.ballY < BALLRADIUS || game.ballY > ofGetHeight() - BALLRADIUS) game.ballDirY *= -1;
	if (game.ballY < BALLRADIUS) game.ballDirY *= -1;

	if (game.ballY > ofGetHeight() - BALLRADIUS) game.ballDirY *= -1;
	else if (game.ballY > game.padY - BALLRADIUS &&
		game.ballX >= game.padX - game.padWidth / 2 &&
		game.ballX <= game.padX + game.padWidth / 2)
		game.ballDirY *= -1;
}

void drawBall() {
	ofFill();
	ofSetColor(ofColor::black);
	ofDrawCircle(game.ballX, game.ballY, BALLRADIUS);
}

void movePad() {
	game.padX = ofGetMouseX();
}

void drawPad() {
	ofFill();
	ofSetColor(ofColor::black);
	ofDrawLine(game.padX - game.padWidth / 2, game.padY, game.padX + game.padWidth / 2, game.padY);
}