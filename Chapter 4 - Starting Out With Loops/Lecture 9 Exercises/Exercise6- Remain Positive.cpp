// Oct29-L9Exercise- REMAIN POS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()

{
	double myNum = 20;

	while (myNum <= 20) {

		cout << myNum << endl;
		if (myNum == 0) {
			break;
		}
		myNum -= 0.5;
	}
}

