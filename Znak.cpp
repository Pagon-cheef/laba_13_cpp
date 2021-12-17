#include "Znak.h"

void Znak::set_vals(int d1, int d2, int d3, std::string name, std::string surname)
{
	// По сути - это сеттер
	this->date[0] = d1;
	this->date[1] = d2;
	this->date[2] = d3;
	this->name = name;
	this->surname = surname;
	this->znak_name = Znac(date);
}

// По задумке данная функция должна возвращать Знак-зодиака
// А может просто печатать его?
std::string Znak::Znac(int data[])
{
	int zodiac = 100 * data[1] + data[0];

	if (zodiac >= 121 && zodiac <= 219)   return "aquarius";
	if (zodiac >= 220 && zodiac <= 320)   return "pisces";
	if (zodiac >= 321 && zodiac <= 420)   return "aries";
	if (zodiac >= 421 && zodiac <= 521)   return "taurus";
	if (zodiac >= 522 && zodiac <= 621)   return "gemini";
	if (zodiac >= 621 && zodiac <= 722)   return "cancer";
	if (zodiac >= 723 && zodiac <= 823)   return "leo";
	if (zodiac >= 824 && zodiac <= 923)   return "virgo";
	if (zodiac >= 924 && zodiac <= 1023)  return "libra";
	if (zodiac >= 1024 && zodiac <= 1122) return "scorpio";
	if (zodiac >= 1123 && zodiac <= 1221) return "saggitarius";
	if (zodiac >= 1222 || zodiac <= 120)  return "capricorn";
}

void Znak::showPersonInfo()
{
	std::cout << "\nPerson info:" << std::endl;
	std::cout << "Birthday date: " << this->date[0] << "/" << this->date[1] << "/" << this->date[2] << std::endl;
	std::cout << "Name: " << this->name << std::endl;
	std::cout << "Surname: " << this->surname << std::endl;
	std::cout << "Znak name: " << this->znak_name << std::endl << std::endl;
}

int Znak::int_date()
{
	return this->date[0] + this->date[1] * 30 + this->date[2] * 365;
}
