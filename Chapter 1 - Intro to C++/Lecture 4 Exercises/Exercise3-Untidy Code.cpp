/*#include <iostream>  #include <string>  using namespace std;

int main() {
	cout << "This is untidy code.";

	cout << "I'm surprised it works.";
	int		number = 6;  cout << "It has" <<
		number << "lines of code	- "
		;
	cout << "each more hideous than the last.	";
				cout << "You probably should add some line breaks  
	in the text too" << endl;

	cin.get(); //keeps console window open in Visual Studio  return 0;

}
*/

#include <iostream>  
#include <string>  

using namespace std;

int main() {
	cout << "This is tidy code. \n";
	cout << "I'm surprised it works. \n";
	int	number = 6;  
	cout << " It has " << number << " lines of code. \n";
	cout << "Each more hideous than the last. \n";
	cout << "You probably should add some line breaks in the text too." << endl;

	cin.get(); //keeps console window open in Visual Studio  return 0;

}