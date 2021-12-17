// Oct31-REVISIONS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;

int main()
{

	int num1, num2, num3, num4, num5;
	int avg;


	cout << "Input Five subject marks (from 0 - 100)\n";
	cout << "Input First Subject: ";
	cin >> num1;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Invalid Input, try again: ";
		cin >> num1;
	}

	
		cout << "Input Second Subject: ";
		cin >> num2;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Invalid Input, try again: ";
			cin >> num2;
		}

	
			cout << "Input Third Subject: ";
			cin >> num3;
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "Invalid Input, try again: ";
				cin >> num3;
			}


				cout << "Input Fourth Subject: ";
				cin >> num4;
				while (cin.fail())
				{
					cin.clear();
					cin.ignore(1000, '\n');
					cout << "Invalid Input, try again: ";
					cin >> num4;
				}

					cout << "Input Fifth Subject: ";
					cin >> num5;
					while (cin.fail())
					{
						cin.clear();
						cin.ignore(1000, '\n');
						cout << "Invalid Input, try again: ";
						cin >> num5;
					}

						while (num1 < 0 || num1 > 100 || num2 < 0 || num2 > 100 || num3 < 0 || num3 > 100 || num4 < 0 || num4 > 100 || num5 < 0 || num5 > 100)
						{
							cin.clear();
							cin.ignore();

							cout << "Invalid Input. Exiting Program";
							cin.ignore(99, '\n');
							return 0;
						}

						avg = (num1 + num2 + num3 + num4 + num5) / 5;

						cout << "Average Marking is = " << avg << endl;

						return 0;
					}
				