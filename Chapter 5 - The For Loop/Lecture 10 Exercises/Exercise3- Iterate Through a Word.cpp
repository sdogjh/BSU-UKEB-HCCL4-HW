#include <iostream>
#include <string>

using namespace std;
int main()
{
    string myWord = "ARSH";
    for (int i = 0; i < 4; i++) {

        cout << "\n" << myWord.at(i);
    }
}