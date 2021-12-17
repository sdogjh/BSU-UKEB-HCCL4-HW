// Example program
#include <iostream>
#include <string>
#include <stdexcept>
#include <limits>
using namespace std;
int main()
{
    //int money = 5;
   // int minsNeededForFriendToCome = 15;
    int input, money;

    cout << "It is 12 AM in the midnight. You are in Dubai Mall waiting for a friend. You suddenly recieved a text message from your friend." << endl;
    cout << "\n\n";
    cout << "How many minutes before your friend arrives? ";
    cin >> input;
    while (cin.fail()) 
        {
            cout << "Invalid input, enter a number again: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> input;
        } 
    cout << "How much money do you have left? ";
    cin >> money;
    while (cin.fail()) 
        {
            cout << "Only accepting integers, try again: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> money;
        } 


    if (input > 14) {
        if (money >= 5) {
            cout << " your friend is arriving in 15 minutes or maybe even more than that so might as well buy a coffee." << endl;
        }
        else {
            cout << " your friend is arriving in 15 minutes or so, and I dont have enough money to buy a coffee." << endl;
            cout << "\n\n";
            cout << " So Im gonna go for a walk around the mall." << endl;
        }
    }
    else {
        cout << " your friend will arrive in less than 15 minutes. Might as well sit in the food court and wait." << endl;
    }
}


// MS ZAINAB CODE
/*#include<iostream>
using namespace std;
int main()
{
	int t, m;
	cout << "Until what time your friend will come? (Enter the time in minutes)\n";
	cin >> t;
	if (t >= 15)
	{
		cout << "Your friend will take more or equal to 15 minutes to come,\n enter the money amount to see if you can drink something";
		cin >> m;
		if (m > 5)
		{
			cout << "You have more than 5 AED, now you will buy a drink and wait for him" << endl;
		}
		else
		{
			cout << "You don't have enough money,\n Let's just walk around";
		}
	}
	else
	{
		cout << "Your friend will be here within 15 minutes, \n so you're just going to wait for him." << endl;
	}
	return 0;
}*/