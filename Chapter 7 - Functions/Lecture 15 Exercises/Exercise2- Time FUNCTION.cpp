#include <iostream>

using namespace std;

string greeting(int time) {
    if (time >= 0 && time < 12) {
        return "Good morning!";
    }
    if (time >= 12 && time <= 17) {
        return "Good afternoon!";
    }
    if (time >= 18 && time <= 21) {
        return "Good evening!";
    }
    if (time >= 22 && time <= 24) {
        return "Good evening!";
    }
    else {
        return "Unable to read time.";
    }
}
int main()
{
    cout << "What time is it? (Enter the time in 24 hour format): ";
    int userInput;
    cin >> userInput;
    while (cin.fail())
    {
        cout << "Invalid input, enter the number again: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> userInput;
    }
    cout << greeting(userInput) << endl;
}