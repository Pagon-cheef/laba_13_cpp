#pragma once
#include <string>
#include <iostream>

struct BD
{
	int month;	// month of year from 0 to 11
	int day;	// day of month from 1 to 31
	int year;	// year since 1900
};

/*
	Использование класса date
	date d;
	d.input();
	d.display();
*/
class date_class
{
private:
	int day, month, year;
	char separator; // to capture the separator between input flds
	const char dash = '-'; // expected separator
	const int current_year = 2021;
public:
	std::string set_val();
	//string input()
	
	void display();
};