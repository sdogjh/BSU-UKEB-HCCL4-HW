#include <iostream>
#include <stdexcept> //just in case the stdlimits is not working
#include <limits> //just in case the stdlimits is not working
using namespace std;
int main() {

    cout << "Please enter a number (from 1 to 2): ";
    int input;
    cin >> input;
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "You did not enter the number 1 or 2";
    }

    else {
        while (input <= 2 && input != 0) {

            if (input == 1) {
                cout << "you have entered the number 1.\n\n";
            }
            else
            {
                cout << "you have entered the number 2.\n\n";
            }

            cout << "Enter a number either 1 or 2 to keep it looping: ";
            cin >> input;

        }
        cout << "You did not enter the number 1 or 2..";

    }
}
