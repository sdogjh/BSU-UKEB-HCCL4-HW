
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int y;
	cout << "Enter a number you want the table of: " << endl;
	cin >> y;
	while (cin.fail()) //THIS IS THE DEBUG ERROR......
	{
		cout << "Invalid command enter the number again: " << endl;
		cin.clear(); // ADD THIS TO NOT LOOP COUT
		cin.ignore(1000, '\n'); // ADD THIS TO NOT LOOP COUT
		cin >> y;
	}
	for (int x = 0; x <= 10; x++)
	{
		cout << y << " x " << x << " = " << y * x << endl;
	}
}
