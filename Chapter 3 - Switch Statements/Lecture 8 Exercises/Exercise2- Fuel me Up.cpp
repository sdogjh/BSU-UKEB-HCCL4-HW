// Oct10-L8Exercise-FUEL ME UP (SWITCH).cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <stdexcept>
#include <limits>

using namespace std;

int main() {
    double liter, total;


    cout << "Hello! Kindly select which Fuel Type you want to use. 'P' for Petrol or 'D' for Diesel: ";
    char fuel;
    cin >> fuel;
    if (fuel == 'p' || fuel == 'P') {
        cout << "You have selected " << fuel << " For Perol." << endl;
    }
    else if (fuel == 'd' || fuel == 'D') {
        cout << "You have selected " << fuel << " For Diesel." << endl;
    }
    else {
        cout << "Invalid Input. Exiting Program..." << endl;
        exit(1);
    }

    cout << "Enter how many liters you want to fill your car: ";
    cin >> liter;
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input.. exiting program... ";
    }

    else {
        cout << "You have selected " << liter << " litres\n";
        switch (fuel)
        {
        case 'P':
        case 'p':
        {
            total = liter * 0.8;
            cout << "\n The total price would be " << total << " AED" << endl;
            break;
        }
        case 'd':
        case 'D':
        {
            total = liter * 0.5;
            cout << "\n The total price would be " << total << " AED" << endl;
            break;
        }

        default:
        {
            cout << "Invalid input.. exiting program... ";
            break;
        }
        }
    }
}
