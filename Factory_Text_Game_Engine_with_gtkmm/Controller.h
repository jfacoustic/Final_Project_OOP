/*
 * Controller.h
 *
 *  Created on: May 1, 2017
 *      Author: joshua
 */

#ifndef CONTROLLER_H_
#define CONTROLLER_H_
#include <iostream>

class Controller {
public:
	Controller();
	virtual ~Controller();
	virtual void getUserInput();
	virtual int sendUserInput();
private:
	int _choice;
};

#endif /* CONTROLLER_H_ */
