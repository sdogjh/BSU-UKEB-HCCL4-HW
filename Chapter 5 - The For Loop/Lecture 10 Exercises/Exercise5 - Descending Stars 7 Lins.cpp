#include <iostream>
#include <string>

using namespace std;
int main()
{

    for (int i = 7; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }

}