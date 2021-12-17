#include<iostream>
#include <math.h>
#include <stdexcept> 
#include <limits> 
#include <string>
using namespace std;

int exponent(int num) {
	int i;
	for (i = 1; i < 11; i++) {
		int power = pow(num, i);
		cout << num << " To the power of " << i << " is: " << power << endl;
	}
	return 0;
}
int main()
{
	int userInput;
	cout << "enter a number to get its power from 1 to 10: ";
	cin >> userInput;
	while (cin.fail()) {
		cout << "Input error. please input another number: ";
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cin >> userInput;
	}
	exponent(userInput);
}
