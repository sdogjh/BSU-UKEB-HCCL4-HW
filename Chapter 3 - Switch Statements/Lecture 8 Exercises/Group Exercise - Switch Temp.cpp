#include <iostream>
using namespace std;

int main()
{
    double val;
    cout << "What is your temperature? Enter the value in numbers: ";
    cin >> val;
    char temp;

    if (val != 0)
    {
        cout << "What is your unit of temperature? C or F: " << endl;
        cin >> temp;
        double fahr = (val * 1.8) + 32;
        double cel = (val - 32) * 0.5556;

        switch (temp)
        {
        case 'f':
        case 'F':
            cout << "Your temperature in Celsius: " << cel << endl;

            break;

        case 'c':
        case 'C':
            cout << "Your temperature in Fahrenheit: " << fahr << endl;

            break;

        default:

            cout << "Invalid Input" << endl;
        }
    }
    else
        cout << "Invalid Input" << endl;
}