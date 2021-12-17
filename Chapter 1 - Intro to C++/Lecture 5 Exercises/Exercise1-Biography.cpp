#include <iostream>
#include <string>
#include <stdexcept>
#include <limits>
using namespace std;

int main() {


    string name, hometown;
    int age;

    cout << " What is your name?:  ";
    getline(cin, name);
    cout << " How old are you?: ";
    cin >> age;
    //Using the cin.fail function (when user enters alphabet instead of numbers)
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Error, cannot identify age. exiting Program\n: ";
        exit(1);
    }
    cout << " Where are you from?: ";
    getline(cin >> ws, hometown); // using ws function to extract whitespace
    


    cout << " \n Hello " << name << " of " << age << " years of age from " << hometown << ". Nice to meet you." << endl;
    



}