#include <iostream>
using namespace std;
int main()
{
	int z,y;
	
	cout << "Enter a number you want the table of: ";
	cin >> y;
	while (cin.fail())
	{
		cout << "You did not enter a number, try again: ";
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> y;
	}
	cout << "Enter a number you want the table to end : ";
	cin >> z;
	while (cin.fail())
	{
		cout << "You did not enter a number, try again: ";
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> z;
	}
	for (int x = 0; x <= z; x++)
	{
		cout << y << " x " << x << " = " << y * x << endl;
	}
}