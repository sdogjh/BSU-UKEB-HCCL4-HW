// Example program
#include <iostream>
#include <string>

using namespace std;

int main() {
	char ans;
	string input;
retry:
	cout << "What is the capital of France? ";
	cin >> input;

	if (input == "paris" || input == "Paris" || input == "PARIS") {
		cout << " you are correct!" << endl;
	}
	else {
		cout << " WRONG!" << endl;

	}
	cout << "Would you like to run program again? Y/N: ";
	cin >> ans;
	if (ans == 'y' || ans == 'Y') {
		goto retry;
	}
	else if (ans == 'n' || ans == 'N') {
		cout << "Closing Program...";
	}
	else {
		cout << "Unknown Input, exiting program...";
	}

}


