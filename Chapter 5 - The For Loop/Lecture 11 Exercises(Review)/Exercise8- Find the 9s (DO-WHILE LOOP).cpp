#include <iostream>
#include <string>
using namespace std;
int main()
{
	int x = 0;
	do
	{
		x++;
		if (x % 9 == 0)
		{
			cout << x << " - Divisible by 9 \n";
		}
		else {
			cout << x << " - not divisible by 9 \n";
		}
	} while (x < 200);
	cout << endl;
}