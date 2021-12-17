
#include <iostream>

using namespace std;
int main()
{
	bool myBirthday = false;  
	int age = 18;

	if (myBirthday == true) {
		age++;
		cout << "It is my birthday. I am " << age << " years old";
	}
	else {
		cout << "It is not my birthday" << endl;
	}

}

/*EXPLANATION
This code is very simple to understand, it all depends on the "myBirthday" variable. If the said birthday is true, the "++" symbol will increment or increase the age by 1.
Otherwise, it won't increment the number and will then display the else statement.


*/
