#include "GTKController.h"

GTKController::GTKController() : Controller() {
	_choice = 0;
}

GTKController::~GTKController() {
}

void GTKController::getUserInput(int choice) {
	_choice = choice;
}

int GTKController::sendUserInput() {
	return _choice;
}
