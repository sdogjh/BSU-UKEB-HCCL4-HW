// Example program
#include <iostream>
#include <string>

using namespace std;


int main() {
	char input, vowLower, vowUpper, consLower, consUpper;

	cout << "Enter a letter if it is vowel or consonant: ";
	cin >> input;

	vowLower = (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u');
	vowUpper = (input == 'A' || input == 'E' || input == 'I' || input == 'O' || input == 'U');
	consLower = (input == 'b' || input == 'c' || input == 'd' || input == 'f' || input == 'g' || input == 'h' || input == 'j' || input == 'k' || input == 'l' || input == 'm' || input == 'n' || input == 'p' || input == 'q' || input == 'r' || input == 's' || input == 't' || input == 'v' || input == 'w' || input == 'x' || input == 'y' || input == 'z');
	consUpper = (input == 'B' || input == 'C' || input == 'D' || input == 'F' || input == 'G' || input == 'H' || input == 'J' || input == 'K' || input == 'L' || input == 'M' || input == 'N' || input == 'P' || input == 'Q' || input == 'R' || input == 'S' || input == 'T' || input == 'V' || input == 'W' || input == 'X' || input == 'Y' || input == 'Z');

	if (vowLower || vowUpper)
		cout << input << " is a vowel";
	else if (consLower || consUpper)
		cout << input << " is a consonant";
	else
		cout << " error message occured, pls enter an appropriate letter and try again. ";

}

/*#include <iostream> MS ZAINAB CODE
using namespace std;

int main()
{
	cout << "Enter a letter to see whether its a vowel or consonant\n";
	char c;
	cin >> c;
	//isalpha is a built in function to check for alphabet values in c++
	if (!isalpha(c))
	{
		cout << "you entered an incorrect value";
	}
	else if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
	{
		cout << "you entered a vowel";

	}


	else
	{
		cout << "you entered a consonant";
	}
}*/

/*#include <iostream> ADVANCED
using namespace std;

int main()
{
	
	char l;
	int count1, count2; // variable for isalpha
	
	cout << "Enter a letter to check whether its a vowel or a consonant: ";
	cin >> l;
	if (l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u'|| l == 'A' || l == 'E' || l == 'I' || l == 'O' || l == 'U') // Checking if the entered character is a vowel
	{
		cout << "The input is a vowel." << endl;
	}
	count1 = isalpha(char(l)); // Using isalpha built-in function for alphabets = isalpha is a method that checks if all values are string with a true or false.
	count2 = isdigit(char(l)); // Using isdigit built-in function for digits = isdigist is a method that check if all values or number with a tru or false .
	if (count1 == 0 && count2 != 4) // Checking if the entered character is a special character, converting the special character into their ASCII code
	{
		cout << "The input is a special character." << endl;
	}
	else if (count1 != 2 && count2 == 4) // Checking if the entered character is a digit
	{
		cout << "The input is a digit." << endl;
	}
	else if (count1 != 0 && count2 != 4 && l != 'a' && l != 'e' && l != 'i' && l != 'o' && l != 'u' && l != 'A' && l != 'E' && l != 'I' && l != 'O' && l != 'U') // Checking if the entered character is a consonant
	{
		cout << "The input is a consonant." << endl;
	}
	else
	{
		cout << "The input is incorrect.";
			}
	return 0;
}*/