# Nov-25-2021-L13ExercisesProblems
only in .txt

------------------------------------RANGED BASED FOR LOOP----------------------------------------------

    #include <iostream>

    using namespace std;

    int main()
    {
    //RANGE BASED FOR LOOP

    string courses[] = { "BSU CC", "BSU BA", "HNC CC", "HND" };
    for (int i = 0; i < 4; i++){
    cout << courses[i] << endl;
    }

    /* OR CAN USE THIS INSTEAD OF TRADITIONAL FOR LOOP
    for (auto course : courses) {
    cout << course << endl;
    */
    }

------------------------------------AUTO KEY WORD------------------------------------------

    // Example program
    #include <iostream>

    using namespace std;

    int main()
    {

    char letters[] = { 'C', 'o', 'd', 'e', 'L', 'a', 'b' };
    /*for (int i = 0; i < 4; i++){
    cout << courses[i] << endl;
    }*/

    for (auto letter : letters) {
    cout << letter << endl;

    }
    }
------------------------------------INPUT/OUTPUT ARRAY------------------------------------------

    #include <iostream>
    using namespace std;

    int main() {
    int numbers[6];

    cout << "Enter 5 numbers " << endl;

    //  store input from user to array
    for (int i = 1; i < 6; i++) {
    cout << "Enter number " << i << ": ";
    cin >> numbers[i];
    }

    cout << "The numbers are: ";

    //  print array elements
    for (int n = 1; n < 6; n++) {
    cout << numbers[n] << "  ";
    }

    return 0;
    }
------------------------------------2D ARRAY------------------------------------------

    #include <iostream>

    using namespace std;

    int main()
    {
    string snacks[3][4] = {
    {"Galaxy milk", "Mars Bar", "Snickers", "Bounty"},
    {"Flavourd Youghurt", "Oman chips", "Oreo", "Lays"},
    {"Apple", "Banana","Orange","Pear"}
    };

    for (int i = 0; i < 3; i++){
    for(int j = 0; j < 4; j++){
    cout << snacks[i][j] << " ";
    }
    cout << endl;
    }
    }
------------------------------------ARRAY ART------------------------------------------

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

    for (int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
    cout << art[i][j] << " ";
    }
    cout << endl;
    }
    }
