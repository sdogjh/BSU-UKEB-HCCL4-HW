#include <iostream>
#include <string>

using namespace std;
int main()
{

    for (int i = 20; i <= 1000; i++) {
        if (i % 2 == 0) {
            cout << i << " - even \n";
        }
        else {
            cout << i << " -odd \n";
        }
    }
}