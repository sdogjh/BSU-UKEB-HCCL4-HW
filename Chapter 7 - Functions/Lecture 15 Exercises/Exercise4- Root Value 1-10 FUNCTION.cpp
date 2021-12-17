#include<iostream>
#include <math.h>
#include <stdexcept> 
#include <limits> 
#include <string>
using namespace std;

int exponent(double num) {
	double i, rootValue;
	for (i = 1; i < 11; i++) {
		rootValue = num * sqrt(i);
		cout << num << " square root of " << i << " is: " << rootValue << endl;
	}
	return 0;
}
int main()
{
	double userInput;
	cout << "Enter a number to get its root value from 1 to 10: ";
	cin >> userInput;
	while (cin.fail()) {
		cout << "Input error. please input another number: ";
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cin >> userInput;
	}
	exponent(userInput);
}
