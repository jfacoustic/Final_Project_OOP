/*
 * main.cpp
 *
 *  Created on: May 1, 2017
 *      Author: joshua
 */
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <gtkmm.h>

#include "Reader.h"

#include "Game.h"
#include "GTKGame.h"
#include "TerminalGame.h"

#include "Controller.h"
#include "GTKController.h"
#include "TerminalController.h"

using namespace std;

int main(int argc, char *argv[]) {
	cout << argc << endl; 
	string dir = "../test_game";	
	if (argc == 1) {
		GTKController * control = new GTKController();
		Reader * reader = new Reader(dir);

		auto app = Gtk::Application::create(argc, argv, "Pirate Adventure Game");	
		GTKGame thisGame(reader, control);
		return app->run(thisGame);
	}
	else {
		Reader * reader = new Reader(dir);
		TerminalController * control = new TerminalController();
		TerminalGame * thisGame = new TerminalGame(reader, control);
		thisGame->run();
		return 0;
	}


}

