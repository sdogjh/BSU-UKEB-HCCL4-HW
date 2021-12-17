#include <iostream>
#include <string>
using namespace std;

int main()
{
    string art[5][5] = {
        {"-", "-", "-", "-", "-"},
        {"-", "O", "-", "O","-"},
        {"-", "^","^","^","-"},
        {"-", "@","@","@","-"},
        {"-", "v","v","v","-"},

    };

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << art[i][j] << " ";
        }
        cout << endl;
    }
}