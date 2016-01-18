/* Converting temperature from celsius to fahrenheit 
and vice versa, created by Luis Hernandez*/

#include <iostream>

using namespace std; 

int main(int argc, char const *argv[])
{
	// setting up the variables

	int c, f;
	int ctemp;
	int ftemp;
	char choose;

	// explain how to use it

	cout << "What would you like to convert?" << endl;
	cout << "c) Celsius \n";
	cout << "f) Fahrenheit \n";
		
	cin >> choose;

		if(choose == 'c'){

			cout << "Enter Celsius and hit ENTER" << endl;
			cin >> ctemp;
			ftemp = (ctemp * 1.8) + 32; // calculate and convert the temp for celsius
			cout << "In Fahrenheit it is: " << ftemp << "F" << endl;

		}
		else if (choose == 'f'){
			cout << "Enter Fahrenheit and hit ENTER" << endl;
			cin >> ftemp;
			ctemp = (ftemp - 32) * 5/9; // calculate and convert to celsius
			cout << "In Celsius it is: " << ctemp << "C" << endl;
		}
 
	return 0;
}
