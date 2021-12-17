
#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
	int numbers[11];
	int i, n;

	cout << "Enter 10 numbers " << endl;

	//  store input from user to array
	for (i = 1; i < 11; i++) {
		cout << "Enter number " << i << ": ";
		cin >> numbers[i];
	}

	cout << "The numbers are: ";

	//  print array elements
	for (n = 1; n < 11; n++) {
		cout << numbers[n] << "  ";
	}

	// print largest number
	for (i = 1; i < n; i++)
	{
		if (numbers[0] > numbers[i]) // compare if number in index is less than the numbers user input.
			numbers[0] = numbers[i]; // make number in index as number of user input.
	}
	cout << "\n\nSmallest number = " << numbers[0];
}