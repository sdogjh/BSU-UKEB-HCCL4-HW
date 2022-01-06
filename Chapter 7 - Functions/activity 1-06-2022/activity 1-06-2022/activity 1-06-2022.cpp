#include <iostream>
using namespace std;
	void recieveUserResponse() {
		char ans;
		cin >> ans;
		if (ans == 'y' || ans == 'Y') {
			cout << "enjoy the trip.";
		}
		else if (ans == 'n' || ans == 'N') {
			cout << "cancelled.";
		}
		else {
			cout << "Invalid input, therefore your flight is cancelled :) ";
		}
	}

	int ageConfirm(int age) {

		if (age >= 16 && age <= 21) {
			cout << "Do you want to go to the mall?(Y/N) ";
			recieveUserResponse();
		}
		else if (age >= 22 && age <= 30) {
			cout << "Do you want to go to a trip to Hawaii? (Y/N) ";
			recieveUserResponse();
		}
		else {
			cout << "\nYou are not allowed to proceed.";
		}
		return 0;
	}


	int main() {
		int age;
		cout << "Enter your age from 16 to 30: ";
		cin >> age;
		while (cin.fail()) {
			cout << "Input error. please input another number: ";
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cin >> age;
		}
		ageConfirm(age);
	}

}
