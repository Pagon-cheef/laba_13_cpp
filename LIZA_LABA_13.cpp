﻿#include <iostream>
#include <string>
#include <ctime>

#include "Znak.h"

using namespace std;

/*
	Разработать программу, которая ...
		1) вводит с консоли данные в массив из 8 элементов типа ZNAK
		2) все записи в массиве должны быть упорядочить по дате рождения
		3) выводит на экран пользователей, родившихся под знаком, который введен с клавиаатуры
*/


// Функция, которая возвращает тип данных Znak!?
Znak get_element() {

	int data[3];
	string name, surname, znak_name;

	while (true)
	{
		system("cls");
		cout << "\nYou need enter 3 int value(birthday)";
		cout << "\nDay: ";
		cin >> data[0];
		cin.get();
		if (data[0] <= 0 || data[0] > 31)
		{
			cout << "\nERROR! Wrong day\n\n";
			system("pause");
		}
		else break;
		continue;
	}

	while (true)
	{
		system("cls");
		cout << "\nYou need enter 3 int value(birthday)";
		cout << "\nDay: " << data[0];

		cout << "\nMonth: ";
		cin >> data[1];
		cin.get();
		if (data[1] <= 0 || data[1] > 12)
		{
			cout << "\nERROR! Wrong month\n\n";
			system("pause");
		}
		else break;
		continue;
	}

	cout << "Year: ";
	cin >> data[2];
	cin.get();
	//if (data[2] <= 190 || data[2] > 2022) data[1] = 2000;

	cout << "\nEnter person name: ";
	std::getline(cin, name);
	cout << "Enter person surname: ";
	std::getline(cin, surname);

	// Переменная типа Znak
	Znak element;

	element.set_vals(data[0], data[1], data[2], name, surname);
	return element;
}

void sort(Znak* mas, int n) 
{
	for (int i = 0; i < n; i++) 
	{
		for (int k = i; k < n; k++) 
		{
			if (mas[i].int_date() > mas[k].int_date()) 
			{
				Znak new_el = mas[i];
				mas[i] = mas[k];
				// Ниже возникает ошибка
				mas[k] = new_el;
			}
		}
	}
}

int get_mode() {
	int mode;
	system("cls");
	cout << "Choice mode:\n1) Show all persons\n2) Show persons for need znak\n3) Exit\n>>> ";
	cin >> mode;
	cin.get();
	return mode;
}

int main() {
	system("chcp 65001");
	system("cls");

	const int count = 3;	// Кол-во подопытных

	Znak body[count];		// Массив подопытных

	for (int i = 0; i < count; i++) {
		body[i] = get_element();
	}

	// Сортровка наших подопытных по ...
	sort(&body[0], count);

	int mode = 0;

	// По идеи это меню!?
	while (mode != 3) {
		if (mode == 1) {
			for (int i = 0; i < count; i++) {
				body[i].showPersonInfo();
			}
		}
		if (mode == 2) {
			string need_znak;
			cout << "Enter need znak: ";
			getline(cin, need_znak);
			for (Znak& a : body) {
				if (a.znak_name == need_znak) {
					a.showPersonInfo();
				}
			}
		}

		cout << endl << endl;
		system("pause");
		mode = get_mode();
		system("cls");
	}
}