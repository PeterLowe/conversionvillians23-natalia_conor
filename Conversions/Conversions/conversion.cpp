// Natalia Ryl
// Conor McDonald 

char printMenu();
void fahrenheitToCelsius();
#include <iostream>

int main()
{
	char userChoice;
	userChoice = printMenu();

	if (userChoice == 'f')
	{
		fahrenheitToCelsius();
	}
	
	

	
	return 1;
}

char printMenu() // natalia
{
	char choice = ' '; // user input choice
	std::cout << "Please enter a upper case letter to convert from left to right and lower to convert from right to left" << std::endl;
	std::cout << "[A] Degrees <---> Radians [a]" << std::endl;
	std::cout << "[B] Centimeters <---> Feet & Inches [b]" << std::endl;
	std::cout << "[C] Litres <---> Gallons [c]" << std::endl;
	std::cout << "[D] Mpg <---> L/100km [d]" << std::endl;
	std::cout << "[E] Kilograms <---> Stone & Pounds [e]" << std::endl;
	std::cout << "[F] Celsius <---> Fahrenheit [f]" << std::endl;

	std::cout << "[Q] Exit [---] Exit [q]" << std::endl;
	std::cout << "Enter your Choice: ";
	std::cin >> choice;

	return choice;
}
void fahrenheitToCelsius() //Written By Conor McDonald
{
	float fahrenheit = 0.0;
	float celsius = 0.0;

	std::cout << "Enter your temperature in Fahrebheit" << std::endl;
	std::cin >> fahrenheit;

	celsius = (fahrenheit - 32) * 5.0 / 9;
	std::cout << "this is your temperature in celsius: " << celsius;

}