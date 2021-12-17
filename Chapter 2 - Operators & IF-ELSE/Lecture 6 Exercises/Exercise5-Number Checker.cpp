#include <iostream>
#include <stdexcept>
#include <limits>
using namespace std;

int main() {

	int num;

	cout << " Enter a number: ";
	cin >> num;
	while (cin.fail())
    {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input, enter a number again: ";
		cin >> num;
	}

	if (num < 0)
		cout << "The number is negative." << endl;
	else if (num > 0)
		cout << "The number is positive." << endl;
	else
		cout << "The number is zero." << endl;

}


