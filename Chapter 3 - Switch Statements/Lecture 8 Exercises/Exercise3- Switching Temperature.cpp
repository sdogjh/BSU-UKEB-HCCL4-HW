// Oct10-L8Exercise-Switching Temp(SWITCH).cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include<iostream>
#include <stdexcept>
#include <limits>
using namespace std;

int main()

{

	int a;

	cout << "Press 1 for Celsius To Fahrenheit. \n";

	cout << "Press 2 for Fahrenheit To Celsius. \n";

	cout << "Press 3 to Exit.\n\n";

	cout << "Please Enter Your Choice of Number:  ";

	cin >> a;

	switch (a)

	{

		double ans, celcius, fahrenheit;

	case 1:

		cout << "Enter The Temperature in Celsius: ";

		cin >> ans;
while (cin.fail()) 
        {
            cout << "Invalid input, enter the number again: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> ans;
        } 
		fahrenheit = (ans * 9 / 5) + 32;

		cout << "\nTemperature in Fahrenheit is = " << fahrenheit << "F";

		break;

	case 2:

		cout << "Enter The Temperature in Fahrenheit: ";

		cin >> ans;
while (cin.fail()) 
        {
            cout << "Invalid input, enter the number again: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> ans;
        } 

		celcius = (ans - 32) * 5 / 9;

		cout << "\nTemperature in Celsius is = " << celcius << "C";

		break;

	case 3:

		cout << "Exiting Program.... ";

		exit(0);

	default:

		cout << "\nError, unknown input has been detected. Exiting program.... \n";

		break;

	}

}
