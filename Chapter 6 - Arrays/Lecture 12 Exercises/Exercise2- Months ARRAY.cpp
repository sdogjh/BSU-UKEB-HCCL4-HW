#include <iostream>
#include <string>

using namespace std;
int main()
{
    string month[12] = { "January", "February", "March", "April", "May", "June", "July", "August",
    "September", "October", "November", "December" };

    for (int i = 0; i < 12; i++) {
        cout << month[i] << endl;
    }
}