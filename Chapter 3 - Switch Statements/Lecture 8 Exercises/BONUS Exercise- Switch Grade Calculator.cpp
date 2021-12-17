// Oct10-L8Exercise-Switch Grade Calc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdexcept>
#include <limits>
#include <string>

using namespace std;

int main()

{

    int score;

    string name;

    char grade;


    cout << "Enter a Student Name: ";

    getline(cin, name);

    cout << "Enter the Student's Mark(between 0-100): ";

    cin >> score;
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input.. exiting program... ";
    }

    else {
        if (score < 0 || score>100)

        {

            cout << "Invalid Score" << endl;

            return 0;

        }

        switch (score / 10)

        {

        case 10:

        case 9:

        case 8:

            grade = 'A';

            cout << "\nStudent Name: " << name << "\n" << "Grade = " << grade << endl;

            break;

        case 7:

            grade = 'B';

            cout << "\nStudent Name: " << name << "\n" << "Grade = " << grade << endl;

            break;

        case 6:

            grade = 'C';

            cout << "\nStudent Name: " << name << "\n" << "Grade = " << grade << endl;

            break;

        case 5:

            grade = 'D';

            cout << "\nStudent Name: " << name << "\n" << "Grade = " << grade << endl;

            break;

        case 4:

            grade = 'E';

            cout << "\nStudent Name: " << name << "\n" << "Grade = " << grade << endl;

            break;

        case 3:
        case 2:
        case 1:
        case 0:

            grade = 'F';

            cout << "\nStudent Name: " << name << "\n" << "Grade = " << grade << endl;

            break;

        default:

            cout << " \nInvalid Grade..." << endl;

        }

        return 0;

    }
}


