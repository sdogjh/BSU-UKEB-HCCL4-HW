#include <iostream>

using namespace std;

int main() {
    int numbers[6];

    cout << "Enter 5 numbers " << endl;

    //  store input from user to array
    for (int i = 1; i < 6; i++) {
        cout << "Enter number " << i << ": ";
        cin >> numbers[i];
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid Input, try again: ";
            cin >> numbers[i];
        }
    }

    cout << "The numbers are: ";

    //  print array elements
    for (int n = 1; n < 6; n++) {
        cout << numbers[n] << "  ";
    }

    return 0;
}