# Oct-29-2021-L9ExercisesProblems
only in .txt

//--------------------------REMAIN POSITIVE WHILE LOOP----------------------------------

    #include <iostream>
  
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


//--------------------------TIMES 9 REVERSE TABLE WHILE LOOP--------------------------------
  
    #include <iostream>
    using namespace std;
    int main() {
    
    int num = 108;
    
    while (num >= 9) { 
    
        cout << "\n" << num;

        num-= 9;
    }
    }

//--------------------------POINTLESS BOX----------------------------------------------------

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
    
//--------------------------IMPROVEMENT DO WHILE LOOP------------------------------------------

    #include <iostream> 
    using namespace std; 
    int main() {
    char input; 
    do{
    cout << "Would you like to Quit (Y/N): ";
    cin >> input;
    
    }while( (input != 'Y') && (input == 'N') || (input != 'y') && (input == 'n') );
    cout << "Exiting Program....";
    return 0;
    }
    
//--------------------------BRUTE FORCE ATK I---------------------------------------------------

    #include <iostream>
    using namespace std;
    int main()
    {
    string pass;
    
    
    cout << "Enter your Password: ";
    cin >> pass;
    
    while (pass != "246"){;
    cout << "Wrong password, Try again. \n\nEnter your Password: ";
    cin >> pass;
    }
    cout << "Access granted. ";
    }
    

//--------------------------BRUTE FORCE ATK II (BREAK STATEMENT)--------------------------------

    #include <iostream>
    #include <string>
    
    using namespace std;
    
    int main ()
    {
    string password;
    int attempt = 1;
    
    while ( attempt < 6 )
    {
    cout << "Enter your password: ";
    cin >> password;
    
    if (  password != "246" )
    {
    cout << "Incorrect password combination. Please try again" << "(" << attempt << ").\n" ;
    
    attempt++;
    if (attempt == 6){
    cout << "Access denied, locking account.";}
    }
    
    else
    {
    cout << "Access granted." << endl;
    break;
    }
    }
    }
//--------------------------LOOPY------------------------------------------------------

    #include <iostream>
    #include <stdexcept> //just in case the stdlimits is not working
    #include <limits> //just in case the stdlimits is not working
    using namespace std; 
    int main() {
    
    
    int myInt; 
    int counter;
    
    cout << "Enter any number and I will count it from bottom to top: ";
    cin >> myInt;
    if (std::cin.fail())
    {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Cannot identify number. Exiting Program";
    }
    
    else {
    while( counter != myInt){
    counter++;
    cout << counter << "\n";
    }
    return 0;
    }}
