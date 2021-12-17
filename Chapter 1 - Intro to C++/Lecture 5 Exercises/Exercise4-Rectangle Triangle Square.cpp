#include <iostream>
#include <string>

using namespace std;

int main() {


    int len, width;

    cout << "enter length: ";
    cin >> len;
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid Input. Exiting Program..... ";
        exit(1);
        
    }

    cout << "enter width: ";
    cin >> width;
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Failed to Calculate. Exiting Program..... ";
        exit(1);
    }


    int rectangle = len * width;
    int triangle = (len * width) * 1 / 2;
    int square = len * len;

    cout << "area of rectangle is: " << rectangle << endl;
    cout << "area of triangle is: " << triangle << endl;
    cout << "area of square is: " << square << endl;

}


