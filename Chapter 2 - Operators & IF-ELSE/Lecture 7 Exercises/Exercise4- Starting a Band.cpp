#include <iostream>
#include <string>
#include <stdexcept>
#include <limits>
using namespace std;
int main()
{
    bool musicalFriend = true;
    string friendPlaysGuitar = "guitar";
    string friendPlaysDrum = "drums";
    string strInput;
    char input;


    cout << "Do you have a musical friend? y/n? ";
    cin >> input;
    if (input == 'n' && input == 'N') {  //no condition made cuz its down below
    musicalFriend = false; 
    }
    else if ((input == 'y' || input =='Y') && musicalFriend == true){
        cout << "Which instrument does your friend play? A guitar or drums? ";
        cin >> strInput;
        if (strInput == friendPlaysGuitar || strInput == friendPlaysDrum) {  //will identify if the user input matches the string in the variable.
            cout << "Great we can start a band!";
        }
        else {
         cout << "I am only looking for a drummer or guitarist, Sorry maybe next time...";   
        }
    }
        else {
            cout << "Well that's too bad...";
        }
    }