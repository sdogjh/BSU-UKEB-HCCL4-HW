#include <iostream>
#include <string>
#include <stdexcept>
#include <limits> 
using namespace std;

int main() {


        /*FAHRENHEIT TO CELCIUS
        int x, y;
        cout << " Enter fahrenheit: ";
        cin >> x;
        if (cin.fail())
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Unable to process input, exiting program... ";
              exit(1);
        }

        y = (x - 32) * 5 / 9;
        cout << x << " Fahrenheit in Celcius is " << y << endl;
        */

        // CELCIUS TO FAHRENHEIT
        double x, y;
        cout << " Enter celcius: ";
        cin >> x;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Unable to process input, exiting program... ";
              exit(1);
        }

        y = x * 1.8 + 32;
        cout << x << " Celcius in Fahrenheit is " << y << endl;
        

      


}

