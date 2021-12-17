#include <iostream>
#include <stdexcept>
#include <limits>
using namespace std;

int main() {

	int num, rem;

	cout << "Enter a number: ";
	cin >> num;
    while (cin.fail())
    {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Input error, enter a number again:  ";
        cin >> num;
    }


	rem = num - (num / 2) * 2;//i used the traditional division method on paper to get the remainder, this is just the same as the % operator.
	if (rem == 0)
		cout << "Number " << num << " is even." << endl;
	else
		cout << "Number " << num << " is odd.";


}
