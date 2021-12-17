//DESCENDING STARS - FOR LOOP
/*
#include <iostream>
#include <string>

using namespace std;
int main()
{

	for (int i = 5; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	*/


	//DESCENDING STARS- WHILE LOOP
#include <iostream>
#include <string>

using namespace std;
int main()
{
	int i = 5;
	while (i > 0) {
		int j = 0;
		while (j < i) {
			cout << "*";
			j++;
		}
		cout << endl;
		i--;
	}
}
