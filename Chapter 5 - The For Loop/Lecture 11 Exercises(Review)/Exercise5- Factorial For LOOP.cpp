// FACTORIAL
#include<iostream>
using namespace std;
int main()
{
	int n, j = 1, i = 1;
	cout << "Enter a number to calculate its factorial: ";
	cin >> n;
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "\n\nUnknown input. Exiting Program.....";
	}
	else {
		while (i <= n)
		{
			j = j * i;
			i++;
		}
		cout << "\n\nThe Factorial of " << n << " is " << j;
	}
}