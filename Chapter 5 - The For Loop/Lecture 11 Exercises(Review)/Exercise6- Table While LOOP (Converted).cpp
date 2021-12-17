#include <iostream>
using namespace std;
int main()
{
	int x = 0;
	int y;
	cout << "Enter a number you want the table of: ";
	cin >> y;
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "\n\nUnknown input, exiting program....";
	}
	else {
		while (x < 10)
		{
			x++;
			cout << y << " x " << x << " = " << y * x << endl;
		}
	}
}