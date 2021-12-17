#include "date_class.h"

std::string date_class::set_val()
{
	std::cout << "Please enter your birth date (mm-dd-yyyy): ";

	if (std::cin >> month && month > 0 && month < 13 && // valid month [1,12]
		std::cin >> separator && separator == dash && // valid separator
		std::cin >> day && day > 0 && day < 32 && // valid day [1,31]
		std::cin >> separator && separator == dash && // valid separator
		std::cin >> year && year > 1800 && year <= current_year) // valid year [1800,current_year]
	{
		// valid input
		return "day";
	}

	else {
		std::cout << "Invalid Date!\n";
		return "ERROR";
	}
}

void date_class::display()
{
	std::cout << "Your Birthday date is dd-mm-yyyy: " << day << "-" << month << "-" << year;
}
