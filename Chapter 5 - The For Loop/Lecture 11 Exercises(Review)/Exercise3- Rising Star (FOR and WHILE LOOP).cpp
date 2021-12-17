//ASCENDING STAR- FOR LOOP
/*
#include <iostream>
#include <string>

using namespace std;
int main()
{
for (int i = 0; i < 6; i++) {
	for (int j = 0; j < i; j++) {
		cout << "*";
	}
	cout << endl;
}}
*/


//ASCENDING STAR- WHILE LOOP
#include <iostream>
#include <string>

using namespace std;
int main()
{
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