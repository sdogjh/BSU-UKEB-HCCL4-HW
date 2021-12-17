#include <iostream>
using namespace std;
int main()
{
    string pass;


    cout << "Enter your Password: ";
    cin >> pass;

    while (pass != "246") {
        ;
        cout << "Wrong password, Try again. \n\nEnter your Password: ";
        cin >> pass;
    }
    cout << "Access granted. ";
}