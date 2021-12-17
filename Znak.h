#pragma once

#include <string>
#include <iostream>

class Znak
{
private:

public:
	// TODO: Лучше использовать сеттер для инициализации переменных
	//= { 0, 0, 0 }
	int date[3] = { 0, 0, 0 };	// date[0] - day, date[1] - month, date[2] - year
	std::string name, surname, znak_name;

	// Методы нашего класса
	std::string Znac(int data[]);
	void set_vals(int d1, int d2, int d3, std::string name, std::string surname);
	void showPersonInfo();
	int int_date();
};

