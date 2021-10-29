# Oct-29-2021-L9ExercisesProblems
only in .txt

//--------------------------REMAIN POSITIVE WHILE LOOP--------------------------------

    #include &lt;iostream>
  
    using namespace std;

    int main()

    {
    double myNum = 20;
    
    while ( myNum <= 20) {
    
    cout << myNum << endl;
    if (myNum == 0) {
    break;
    }
    myNum -= 0.5;
    }
    }


//--------------------------TIME REVERSE TABLE WHILE LOOP--------------------------------
  
    #include <iostream>
    using namespace std;
    int main() {
    
    int num = 108; 
    
    while (num >= 0) { 
    
        cout << "\n" << num;

        num--;
    }
    }

//--------------------------POINTLESS BOX--------------------------------

    #include <iostream>
    #include <stdexcept> //just in case the stdlimits is not working
    #include <limits> //just in case the stdlimits is not working
    using namespace std;
    int main() {

    cout << "Please enter a number (from 1 to 2): ";
    int input;
    cin >> input;
    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "You did not enter the number 1 or 2";
    }

    else {
    while (input <= 2 && input != 0 ) {

    if (input == 1) {
    cout << "You have entered " << input;
    break;
    }
    else {
    cout << "You have entered " << input;
    break;
    }
    }
    }}
    

