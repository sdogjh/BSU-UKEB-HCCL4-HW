#include <iostream>
#include <string>

using namespace std;
int main()
{

    int marks[5], sum = 0, average;



    for (int i = 0; i < 5; i++)
    {
        cout << "Enter " << " marks for subject " << i << ": ";
        cin >> marks[i];
        while (cin.fail()) 
        {
            cout << "Invalid input, enter the number again: " << ;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> marks[i];
        }
        sum += marks[i];
    }

    average = sum / 5;
    cout << "The Average mark is : " << average;

    return 0;
}