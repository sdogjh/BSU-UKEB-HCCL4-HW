#include <iostream>
#include <string>
#include <math.h>
#include <stdexcept>
#include <limits>
using namespace std;
int main()
{

    double num;
    cout << "Enter number to calculate its square-root and cube-root: ";
    cin >> num;
    while (cin.fail()) 
        {
            cout << "LOL, Enter a number again: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> num;
        } 

    cout << "The cube root of " << num << " is " << cbrt(num) << endl;
    cout << "The square-root of " << num << " is " << sqrt(num) << endl;
}