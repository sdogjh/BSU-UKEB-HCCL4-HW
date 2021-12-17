#include <iostream>
#include <string>
#include <stdexcept> 
#include <limits>
using namespace std;

int main() {


    string name, hometown, live;
    int age;

    cout << " What is your name?:  ";
    getline(cin, name);
    cout << " How old are you?: ";
    std::cin >> age;
    //Using the cin.fail function (when user enters alphabet instead of numbers)
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Error, cannot identify age. exiting Program\n: ";
        exit(1);
    }
    cout << " Where do you currently live?: ";
    getline(cin >> ws, live); // using ws function to extract whitespace 
    cout << " Where are you from?: ";
    getline(cin >> ws, hometown);


    cout << " \n Name: " << name << endl;
    cout << "  Age: " << age << endl;
    cout << " Current Address: " << live << endl;
    cout << " Permanent Address: " << hometown << endl;



}