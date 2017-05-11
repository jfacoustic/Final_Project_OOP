/*
 * Game.h
 *
 *  Created on: May 1, 2017
 *      Author: joshua
 */

#ifndef TERMINAL_GAME_H_
#define TERMINAL_GAME_H_
#include <iostream>
#include "Reader.h"
#include "TerminalController.h"
#include "Game.h"
class TerminalGame : public Game {
public:
	TerminalGame(Reader * reader, TerminalController * control);
	virtual ~TerminalGame();
	void run();
private:
	//std::string _textToPrint;
	bool _running;
	int _currentChoice;
	Reader * _reader;
	TerminalController * _control;

};

#endif /* GAME_H_ */
