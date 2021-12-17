#include <iostream>
using namespace std;
int main() {

    int num = 108;
    cout << "Counting from 108 to 9.";
    while (num >= 9) {

        cout << "\n" << num;

        num -= 9;
    }
}