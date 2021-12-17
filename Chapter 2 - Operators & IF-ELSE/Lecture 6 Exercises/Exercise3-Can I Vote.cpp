#include <iostream>
#include <stdexcept> 
#include <limits> 
using namespace std;

int main()
{
    cout << "Kindly enter your age to see whether you can vote or not: ";
    int age;
    cin >> age;
    if (cin.fail())
    {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Error, cannot identify age. exiting Program.... ";
    }
    else{
    if (age >= 18)
    {
        cout << "You are eligible to vote!";

    }
    else
    {
        cout << "Unfortunately, you are not eligible to vote.";
    }

}
}