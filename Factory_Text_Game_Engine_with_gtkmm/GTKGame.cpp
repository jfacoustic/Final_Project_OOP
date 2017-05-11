/*
 * Game.cpp
 *
 *  Created on: May 1, 2017
 *      Author: joshua
 */

#include "GTKGame.h"

GTKGame::GTKGame(Reader * reader, GTKController * control)
:	m_VBox(Gtk::ORIENTATION_VERTICAL),
	m_Button_Restart("_Restart", true),
	m_Button_Quit("_Quit", true),
	m_Button_Selection1("Select Option 1"),
	m_Button_Selection2("Select Option 2"),
	m_Button_Selection3("Select Option 3")
{

	// TODO Auto-generated constructor stub
	_running = true;
	_currentChoice = 0;
	_reader = reader;
	_control = control;
	myDescription.set_size(20);

	set_title("Gtk::TextView example");
	set_border_width(5);
	set_default_size(800, 400);

	add(m_VBox);
	m_TextView.set_editable(false);
	
	//Add the TreeView, inside a Scrolled Window, with the button underneath:
	m_ScrolledWindow.add(m_TextView);
	//Only show scrollbars when they are necessary:
	
	m_ScrolledWindow.set_policy(Gtk::POLICY_AUTOMATIC, Gtk::POLICY_AUTOMATIC);
	m_VBox.pack_start(m_ScrolledWindow);
	
	//Add buttons:
	
	m_VBox.pack_start(m_ButtonBox, Gtk::PACK_SHRINK);
	
	m_ButtonBox.pack_start(m_Button_Selection1, Gtk::PACK_SHRINK);
	m_ButtonBox.pack_start(m_Button_Selection2, Gtk::PACK_SHRINK);
	m_ButtonBox.pack_start(m_Button_Selection3, Gtk::PACK_SHRINK);
	m_ButtonBox.pack_start(m_Button_Restart, Gtk::PACK_SHRINK);
	m_ButtonBox.pack_start(m_Button_Quit, Gtk::PACK_SHRINK);
	m_ButtonBox.set_border_width(5);
	m_ButtonBox.set_spacing(5);
	m_ButtonBox.set_layout(Gtk::BUTTONBOX_END);

	//Connect signals:
	
	m_Button_Quit.signal_clicked().connect(sigc::mem_fun(*this, &GTKGame::on_button_quit) );
	
	m_Button_Selection1.signal_clicked().connect(sigc::mem_fun(*this, &GTKGame::on_button_selection1) );
	
	m_Button_Selection2.signal_clicked().connect(sigc::mem_fun(*this, &GTKGame::on_button_selection2) );

	m_Button_Selection3.signal_clicked().connect(sigc::mem_fun(*this, &GTKGame::on_button_selection3) );
	
	m_Button_Restart.signal_clicked().connect(sigc::mem_fun(*this, &GTKGame::on_button_restart) );

	fill_buffer();
	//on_button_selection1();
	show_all_children();
}



void GTKGame::runGame() {

}


void GTKGame::fill_buffer() {
	_reader->read();
//	m_refTextBuffer.override_font(myDescription);
	m_refTextBuffer = Gtk::TextBuffer::create();
	m_refTextBuffer->set_text(_reader->getText());
	m_TextView.set_buffer(m_refTextBuffer);
}

GTKGame::~GTKGame() {
}

void GTKGame::on_button_quit() {
	hide();
}

void GTKGame::on_button_restart() {
	_reader->restart();
	_reader->read();
	m_refTextBuffer->set_text(_reader->getText());
}

void GTKGame::on_button_selection1() {	

	_control->getUserInput(1);
	_currentChoice = _control->sendUserInput();
	_reader->setDirectory(_currentChoice);
	_reader->read();
	m_refTextBuffer->set_text(_reader->getText());

}

void GTKGame::on_button_selection2() {

	_control->getUserInput(2);
	_currentChoice = _control->sendUserInput();
	_reader->setDirectory(_currentChoice);
	_reader->read();
	m_refTextBuffer->set_text(_reader->getText());

}

void GTKGame::on_button_selection3() {

	_control->getUserInput(3);
	_currentChoice = _control->sendUserInput();
	_reader->setDirectory(_currentChoice);
	_reader->read();
	m_refTextBuffer->set_text(_reader->getText());

}

