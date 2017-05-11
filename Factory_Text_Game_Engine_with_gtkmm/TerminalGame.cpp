/*
 * Game.cpp
 *
 *  Created on: May 1, 2017
 *      Author: joshua
 */

#include "TerminalGame.h"

TerminalGame::TerminalGame(Reader * reader, TerminalController * control){
	// TODO Auto-generated constructor stub
	_running = true;
	_currentChoice = 0;
	_reader = reader;
	_control = control;
}

TerminalGame::~TerminalGame() {

}


void TerminalGame::run() {
	while(_running) {
		_reader->read();
		std::cout << _reader->getText();
		_control->getUserInput();
		_currentChoice = _control->sendUserInput();
		if(_currentChoice == 0) {
			_running = false;
			break;
		}
		_reader->setDirectory(_currentChoice);
	}

}
