// Natalia Ryl
// Conor McDonald 

#include <iostream>

char printMenu();
void degreesToRadians();
void fahrenheitToCelsius();
void stoneAndPoundsToKilos ();
void kmToMpg();
void centimetersToFeetInches();

int main()
{
	char userChoice;
	userChoice = printMenu();

	if (userChoice == 'A')
	{
		degreesToRadians();
	}
	else if (userChoice == 'B')
	{
		centimetersToFeetInches();
	}
	else if (userChoice == 'd')
	{
		kmToMpg();
	}
	else if (userChoice == 'e')
	{
		stoneAndPoundsToKilos();
	}
	else if (userChoice == 'f')
	{
		fahrenheitToCelsius();
	}

	return 1;
}

char printMenu() // natalia & conor
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

void degreesToRadians() // natalia
{
	double degrees = 0.0;
	double radians = 0.0;

	std::cout << "Enter degrees: " << std::endl;
	std::cin >> degrees;

	radians = degrees * 0.0175;

	std::cout << "That is " << radians << " radians" << std::endl;
}

void centimetersToFeetInches() // natalia
{
	double centimeters = 0.0;
	double feetInches = 0.0;

	std::cout << "Enter centimeters: " << std::endl;
	std::cin >> centimeters;

	feetInches = centimeters * 0.032808399;

	std::cout << "That is " << feetInches << " feet and inches" << std::endl;
}

void fahrenheitToCelsius() //Written By Conor McDonald
{
	double fahrenheit = 0.0;
	double celsius = 0.0;

	std::cout << "Enter your temperature in Fahrebheit" << std::endl;
	std::cin >> fahrenheit;

	celsius = (fahrenheit - 32) * 5.0 / 9;
	std::cout << "this is your temperature in celsius: " << celsius;
}

void stoneAndPoundsToKilos() //Written By Conor McDonald
{
	double stoneAndPounds = 0.0;
	double kilograms = 0.0;

	std::cout << "Enter your weigth in Stone & Pounds" << std::endl;
	std::cin >> stoneAndPounds;

	kilograms = (stoneAndPounds * 6.35);
	std::cout << "Your weight in Kilograms is: " << kilograms;

}

void kmToMpg() //written by Conor McDonald
{
	float km = 0.0;
	float mpg = 0.0;

	std::cout << "Enter your km" << std::endl;
	std::cin >> km;

	mpg = (km * 2.3521458);
	std::cout << "your mpg is :" << std::endl;
}