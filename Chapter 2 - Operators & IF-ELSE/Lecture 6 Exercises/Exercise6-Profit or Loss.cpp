#include <iostream>
#include <stdexcept>
#include <limits>
using namespace std;

int main() {

	int purchasePrice, salePrice, ans, nans;

	cout << "Enter Purchase Price: ";
	cin >> purchasePrice;
	if (cin.fail())
    {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Unable to process input, exiting program..... ";
	}
    else{
	cout << "Enter Sale Price: ";
	cin >> salePrice;
	if (cin.fail())
    {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Unable to process input, exiting program..... ";
	}
else{
	ans = purchasePrice - salePrice;

	if (ans < 0) {
		nans = -ans; // this gets rid of the minus sign on the profit result.
		cout << "You gained " << nans <<" AED."<< endl;
	}
	else if (ans > 0) {
		cout << "You lost " << ans <<" AED."<< endl;
	}
	else {
		cout << "No gains or loss" << endl;
	}

}
}}
