#include <iostream>
#include <array>
#include <algorithm>
#include <time.h>
using namespace std;

int main()
{
    char ans;
    do {
        srand(time(0));
        int randomArr[1000], x = 0, i;
        for (int i = 0; i < 1000; i++)
        {
            randomArr[i] = rand() % 100 + 1;
            cout << randomArr[i] << "  ";

            if (randomArr[i] == 6) {
                x++;
            }
            else {
                continue;
            }
        }
        cout << "\n\nTotal occurence of number 6: " << x;
        cout << "\nDo you want to re-run the program? Y/N: ";
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');
    if (ans == 'n' || ans == 'N') {
        cout << "Exiting Program...";
    }
    else {
        cout << "Cannot identify the input...program terminated.";
    }
}



