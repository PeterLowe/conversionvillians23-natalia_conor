// Natalia Ryl

#include <iostream>

int main()
{
	return 1;
}

char printMenu() // natalia
{
	char choice = ' '; // user input choice
	std::cout << "Please enter a upper case letter to convert from left to right and lower to convert from right to left" << std::endl;
	std::cout << "[A] Degrees <---> Radians [a]" << std::endl;
	std::cout << "[B] Centimeters <---> Feet & Inches [b]" << std::endl;
	std::cout << "[C] Litres <---> Gallons [c]" << std::endl;

	std::cout << "[Q] Exit [---] Exit [q]" << std::endl;
	std::cout << "Enter your Choice: ";
	std::cin >> choice;
	
	return choice;
}