/*
 * Reader.cpp
 *
 *  Created on: May 1, 2017
 *      Author: joshua
 */

#include "Reader.h"
#include <iostream>
Reader::Reader(std::string directory) {
	// TODO Auto-generated constructor stub
	_directory = directory;
	_initialDirectory = directory;
	_textToSend = "";
}

Reader::~Reader() {
	// TODO Auto-generated destructor stub
}

void Reader::setDirectory(int choice) {
	//only allows up to 10 choices...
	char temp = char(choice + 48);
	_directory += "/";
	_directory += temp;
	_textToSend = "";
}

void Reader::read() {
	std::ifstream fin;
	std::string file = _directory + "/text.txt";
	fin.open(file);
	std::string temp;
	while(getline(fin, temp)) {
		_textToSend += temp + char(10);
	}

}

std::string Reader::getText() {
	return _textToSend;
}

void Reader::restart() {
	_directory = _initialDirectory;
}
