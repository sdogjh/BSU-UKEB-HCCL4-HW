// am.pm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include <stdexcept>
#include <limits>
using namespace std;
int main()
{
	cout << "Enter the time in 24 hour format to see if its; Morning, Afternoon, Evening, and Late Night: ";
	double time;
	cin >> time;
	if (cin.fail())
    {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout << "Unable to process input.\n: ";
	exit(1);
	}

	if (time < 12)
	{
		cout << "Good Morning!";
	}
	else if (time >= 12 && time < 18)
	{
		cout << "Good Afternoon!";
	}
	else if (time >= 18 && time < 21)
	{
		cout << "Good Evening";
	}
	else if (time >= 21 && time < 24)
	{
		cout << "Good Night..";
	}
	else
	{
		cout << "Cannot Identify time. Sorry.";
	}
}
