/*
 * Controller.cpp
 *
 *  Created on: May 1, 2017
 *      Author: joshua
 */

#include "Controller.h"

Controller::Controller() {
	// TODO Auto-generated constructor stub
	_choice = 0;
}

Controller::~Controller() {
	// TODO Auto-generated destructor stub
}

void Controller::getUserInput() {
	int temp;
	std::cin >> temp;
	_choice = temp;
}

int Controller::sendUserInput() {
	return _choice;
}
