//FOR LOOP - COMBINED 2 TRIANGLE
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
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << endl;
	}

}
*/

//WHILE LOOP - COMBINED 2 TRIANGLE
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
	int k = 0;
	while (k < 5) {
		int l = 0;
		while (l <= k) {
			cout << "*";
			l++;
		}
		cout << endl;
		k++;
	}
}