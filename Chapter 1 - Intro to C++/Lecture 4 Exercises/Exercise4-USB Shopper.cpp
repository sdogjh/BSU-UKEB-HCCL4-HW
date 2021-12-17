#include <iostream>
using namespace std;

int main()
{
	int herMoney = 50, USBPrice = 6;

	int totalUSBSticksSheBought = herMoney / USBPrice;
	int herChange = herMoney % USBPrice;

	cout << totalUSBSticksSheBought << endl;
	cout << herChange << endl;

	cin.get();
	return 0;
}
