#include <iostream>
#include <string>

using namespace std;
int main()
{

    for (int i = 100; i <= 200; i++) {
        if (i % 9 == 0) {
            cout << i << " - Divisible by 9 \n";
        }
        else {
            cout << i << " - not divisible by 9 \n";
        }
    }
}