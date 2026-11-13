#include <iostream>
#include <clocale>

int main()
{
	setlocale(LC_ALL, "Russian");

	std::cout << "****************************************" << std::endl;
	std::cout << "* Иван, РПО 25/1\n* Повторение темы" << std::endl;
	std::cout << "****************************************" << std::endl;

	return 0;
}