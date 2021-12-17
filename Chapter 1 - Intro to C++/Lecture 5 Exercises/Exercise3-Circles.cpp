#include <iostream>
#include <string>
#include <stdexcept>
#include <limits> 

using namespace std;

int main() {

    double a, c, r;
    cout << " enter radius: ";
    cin >> r;
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Ivalid Input. Exiting Program....\n: ";
        exit(1);
    }

    a = 3.14 * (r * r);
    c = (2 * 3.14) * r;

    cout << "The area of the circle is " << a << " and the circumference is " << c << endl;

}