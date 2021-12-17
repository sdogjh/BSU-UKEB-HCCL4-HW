// Oct10-L8Exercise-Days of Month(SWITCH).cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;
int main()
{

	cout << "Kindly select the option number for the month you want to see the days of:\n";

	cout << " 1. January\n 2. February\n 3. March\n 4. April\n 5. May \n 6. June \n 7. July \n 8. August\n 9. September\n 10. October\n 11. November\n 12. December\n";
	int a;
	cout << "\nEnter your designated month number: ";
	cin >> a;


	switch (a)
	{
	case 1:
	{
		cout << "The month of January have  days 31";
		break;
	}
	case 2:
	{
		cout << "The month of February have  days 28 if there is a leap year than 29";
		break;
	}
	case 3:
	{
		cout << "The month of March have  days 31";
		break;
	}
	case 4:
	{
		cout << "The month of April have  days 30";
		break;
	}
	case 5:
	{
		cout << "The month of May have  days 31";
		break;
	}
	case 6:
	{
		cout << "The month of June have  days 30";
		break;
	}
	case 7:
	{
		cout << "The month of July have  days 31";
		break;
	}
	case 8:
	{
		cout << "The month of August have  days 31";
		break;
	}
	case 9:
	{
		cout << "The month of September have  days 30 ";
		break;
	}
	case 10:
	{
		cout << "The month of October have  days 31";
		break;
	}
	case 11:
	{
		cout << "The month of November have  days 30";
		break;
	}
	case 12:
	{
		cout << "The month of December have  days 31";
		break;
	}

	default:
	{
		cout << "Invalid Input.. Exiting Program..." << endl;
		break;
	}
	}

}
