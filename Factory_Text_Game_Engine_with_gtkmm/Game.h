#ifndef GAME_H
#define GAME_H

#include <iostream>
#include "Reader.h"
#include "Controller.h"


class Game {
public:
	Game();
	virtual ~Game();
	virtual void runGame();
	static Game * Instance();	
private:
	static Game * _instance;
};
#endif
