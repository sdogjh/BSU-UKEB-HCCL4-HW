#include <iostream>
using namespace std;
int main()
{
    cout << "Please enter your height in meters to check whether you can ride or not\n";
    double h, age;
    cin >> h;
    cout << "Please enter your age to check whether you can ride or not\n";
    cin >> age;
    if (age >= 5 && h >= 0.6)
    {
        cout << "You can ride";
    }
    else if (age < 5 && h < 0.5)
    {
        cout << "Sorry you cannot ride";
    }
    else
    {
        cout << "Incorrect input";
    }
    return 0;
}