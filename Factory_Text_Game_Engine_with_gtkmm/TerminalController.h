/*
 * TerminalController.h
 *
 *  Created on: May 9, 2017
 *      Author: joshua
 */

#ifndef TERMINALCONTROLLER_H_
#define TERMINALCONTROLLER_H_
#include "Controller.h"
class TerminalController : public Controller{
public:
	TerminalController();
	virtual ~TerminalController();
	void getUserInput();
	int sendUserInput();
private:
	int _choice;
};

#endif /* TERMINALCONTROLLER_H_ */
