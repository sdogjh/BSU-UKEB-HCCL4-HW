#include <iostream>
#include <array>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int x = 0, numbers[10], n;
    cout << "Enter total number of elements(1 to 10): \n";
    // Store number entered by the user
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter Number " << i + 1 << " : ";
        cin >> numbers[i];
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Input error, exiting program";
            exit(1);
        }
    }
    cout << "\nThe input numbers are:";
    for (n = 0; n < 10; n++) {
        cout << numbers[n] << "  ";
    }
    for (int i = 0; i < 10; ++i)
    {
        // Change < to > if you want to find the smallest element

        if (x < numbers[i])
            x = numbers[i];
    }
    cout << "\nLargest element = " << x;

    return 0;
}