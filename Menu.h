
#pragma once
#include "lib.h"

class Menu
{
protected:
	Keeper list;
	Human* humans;
	string redact;
	int exit = 1;
public:
	void main_menu();
	int show_options();
	void show_all_persons();
	void change_data();
	void add_new();
	void save_to_file();
	void load_from_file();
	void delete_person();
	void exit_from_programm();
	void findMonster();

};
