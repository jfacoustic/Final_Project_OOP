/*
 * Reader.h
 *
 *  Created on: May 1, 2017
 *      Author: joshua
 */

#ifndef READER_H_
#define READER_H_

#include <fstream>

class Reader {
public:
	Reader(std::string directory);
	virtual ~Reader();
	void setDirectory(int choice);
	std::string getDirectory();
	void read();
	std::string getText();
	void restart();
private:
	std::string _initialDirectory;
	std::string _directory;
	std::string _textToSend;
};

#endif /* READER_H_ */
