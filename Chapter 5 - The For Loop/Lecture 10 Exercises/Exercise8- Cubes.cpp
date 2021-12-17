#include<iostream>
#include <stdexcept> 
#include <limits> 
using namespace std;
int main()
{
	int input = 1, formula;
	cout << "Enter a number to count cube root iteration: ";
	cin >> input;
	if (cin.fail()) {
		cout << "Input error. closing program. ";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		exit(1);
	}
	for (int i = 1; i <= input; i++) {
		formula = (i * i) * i;
		cout << "Number is: " << i << " and cube root of " << i << " is " << formula << "." << endl;

	}
	return 0;
}