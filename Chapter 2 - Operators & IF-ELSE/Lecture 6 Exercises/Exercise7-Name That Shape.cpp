#include <iostream>
#include <stdexcept>
#include <limits>
using namespace std;

int main() {

    int shape;

    cout << "Enter a number to determine shape: ";
    cin >> shape;
    if (cin.fail())
    {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Program only accepting integers, exiting program... ";
        exit(1);
    }
else{
    if (shape == 3)
        cout << "that is a Triangle. " << endl;
    else if (shape == 4)
        cout << "that is a Square. " << endl;
    else if (shape == 5)
        cout << "that is a Pentagon. " << endl;
    else if (shape == 6)
        cout << "that is a Hexagon. " << endl;
    else if (shape == 7)
        cout << "that is a Heptagon. " << endl;
    else if (shape == 8)
        cout << "that is an Octagon. " << endl;
    else if (shape == 9)
        cout << "that is a Nonagon. " << endl;
    else if (shape == 10)
        cout << "that is a Decagon. " << endl;
    else
        cout << "Invalid shape. " << endl;

}}