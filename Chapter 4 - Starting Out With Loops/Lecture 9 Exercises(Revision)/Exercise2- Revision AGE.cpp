// Oct-31-Revision AGE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdexcept>
#include <limits>

using namespace std;
int main()
{
    int age;
    cout << "What is your age? ";
    cin >> age;
    while (cin.fail())
    {
        cout << "Cmon bruh, enter a proper age: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> age;
    }

    if (age >= 10 && age <= 12)
        cout << "You are a Preteen age.";
    else if (age >= 13 && age <= 19)
        cout << "You are a Teenager";
    else if (age >= 20 && age <= 29)
        cout << "You're in your Twenties.";
    else if (age >= 30 && age <= 39)
        cout << "You're in your Thirties";
    else if (age >= 40 && age <= 49)
        cout << "You're in your Forties";
    else if (age >= 50 && age <= 59)
        cout << "You're in your Fifties";
    else if (age >= 60)
        cout << "You're in your Sixties and above, may you live longer.";
    else {
        cout << "Age is not accepted";
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
