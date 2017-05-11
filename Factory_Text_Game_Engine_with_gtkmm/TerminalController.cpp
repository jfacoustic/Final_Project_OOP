/*
 * TerminalController.cpp
 *
 *  Created on: May 9, 2017
 *      Author: joshua
 */

#include "TerminalController.h"

TerminalController::TerminalController() : Controller(){
	// TODO Auto-generated constructor stub
	 _choice = 0;
}

TerminalController::~TerminalController() {
	// TODO Auto-generated destructor stub

}

void TerminalController::getUserInput() {
	int temp;
	std::cin >> temp;
	_choice = temp;
}

int TerminalController::sendUserInput() {
	return _choice;

}
