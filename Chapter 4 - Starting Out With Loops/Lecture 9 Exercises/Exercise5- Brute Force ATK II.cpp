
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string password;
    int attempt = 1;

    while (attempt < 6)
    {
        cout << "Enter your password: ";
        cin >> password;

        if (password != "246")
        {
            cout << "Incorrect password combination. Please try again" << "(" << attempt << ").\n";

            attempt++;
            if (attempt == 6) {
                cout << "Access denied, locking account.";
            }
        }

        else
        {
            cout << "Access granted." << endl;
            break;
        }
    }
}