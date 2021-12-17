// Switch Case Statements.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{
	/*
	int a, b, input;
	cout << "ENTER TWO NUMBERS TO CALCULATE " << endl;
	cout << "\n" << " enter First number: ";
	cin >> a;
	cout << " enter Second number: ";
	cin >> b;
	cout <<"\n" << "Pick a calculation" << endl;
	cout << "1: Addition\n2: Subtraction\n3: Multiplication\n4: Division" << endl;

	cin >> input;

	switch (input) {
	case 1:
		cout << "\n" << (a + b);
		break;
	case 2:
		cout << "\n" << (a - b) << endl;
		break;
	case 3:
		cout << "\n" << (a * b) << endl;
		break;
	case 4:
		cout << "\n" << (a / b) << endl;
		break;
	default:
		cout <<  "\n" << " Invalid Input " << endl;
	}
	*/

//GROUP CASE
	/*
	cout << "Would u like sugar? " << endl;
	char input;
	cin >> input;

	switch (input) {
	case 'Y':
	case 'y':
		cout << "Adding sugar...." << endl;
		break;
	case 'N':
	case 'n':
		cout << "No sugar requested." << endl;
		break;
	default:
		cout << "That input was not recognized." << endl;
	}
	*/

	//GROUP CASE EXERCISE
	/*char input;
	
	cout << "Would you like to keep playing the game? " << endl;
	cout << "\n" << " Press Y to continue / Press N to quit: ";
	cin >> input;

	switch (input) {
	case 'Y':
	case 'y':
		cout << "\n" << "Gaming continued." << endl;
		break;
	case 'N':
	case 'n':
		cout << "\n" << "Game over." << endl;
		break;
	default:
		cout << "\n" << "That input was not recognized." << endl;
	}*/
	

	// DAYS OF THE MONTH EXERCISE

	int month;
	cout << "Enter the Month based on their number from 1 to 12: ";
	cin >> month;

	switch (month)
	{
	case 1:
		cout << "\n" << " January has 31 days.";
		break;
	case 2:
		cout << "\n" << " February has 28 or 29 days if leap year.";
		break;
	case 3:
		cout << "\n" << " March has 31 days.";
		break;
	case 4:
		cout << "\n" << " April has 30 days.";
		break;
	case 5:
		cout << "\n" << " May has 31 days.";
		break;
	case 6:
		cout << "\n" << " June has 30 days.";
		break;
	case 7:
		cout << "\n" << " July has 31 days.";
		break;
	case 8:
		cout << "\n" << " August has 31 days.";
		break;
	case 9:
		cout << "\n" << " September has 30 days.";
		break;
	case 10:
		cout << "\n" << " October has 31 days.";
		break;
	case 11:
		cout << "\n" << " November has 30 days.";
		break;
	case 12:
		cout << "\n" << " December has 31 days.";
		break;
	default:
		cout << "\n" << " Error, invalid input. ";
	}
	return 0;
}

