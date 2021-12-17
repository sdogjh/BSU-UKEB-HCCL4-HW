#include <iostream>
#include <stdexcept> //just in case the stdlimits is not working
#include <limits> //just in case the stdlimits is not working
using namespace std;
int main() {


	int myInt;
	int counter = -1;

	cout << "Enter any number and I will count it from bottom to top: ";
	cin >> myInt;
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Cannot identify number. Exiting Program";
	}

	else {
		while (counter != myInt) {
			counter++;
			cout << counter << "\n";
		}
		return 0;
	}
}
