#include <iostream> 
using namespace std;
int main() {
    char input;
    do {
        cout << "Would you like to Quit (Y/N): ";
        cin >> input;

    } while ((input != 'Y') && (input == 'N') || (input != 'y') && (input == 'n'));
    cout << "Exiting Program....";
    return 0;
}