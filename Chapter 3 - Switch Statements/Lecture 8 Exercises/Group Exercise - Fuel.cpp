#include <iostream>
using namespace std;
int main()
{
    int lit;
    cout << "How many liters of fuel do you need sir/maam?" << endl;
    cin >> lit;



    if (lit != 0)
    {
        cout << "Which type of fuel you would like to use? (P for Petrol/D for Diesel): ";
        char fuel;
        cin >> fuel;

        switch (fuel)
        {
        case 'p':
        case 'P':
        {
            cout << "You have chosen Petrol" << endl;
            double cp;

            cp = lit * 2.5;
            cout << "The price of your fuel is: " << cp << endl;
            break;
        }
        case 'D':
        case 'd':
        {
            cout << "You have chosen Diesel" << endl;
            double dp;

            dp = lit * 5;
            cout << "The price of your fuel is: " << dp << endl;
            break;

            break;
        }

        default:
        {
            cout << "Invalid input";
            break;
        }
        }
    }

    else {
        cout << "Invalid Input" << endl;
    }

}