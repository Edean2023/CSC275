#include <iostream>
#include <string>

using namespace std;

int main() {
	cout << "\n\n\tExamples of Exceptions\n";
	cout << "In this program, I'll be using 4 different exceptions!\n";

	try
	{
		// this doesn't work. The exception goes unhandled. 

		cout << "\n\n\tExamples of Exceptions\n";
		int firstNumber = 21;
		int secondNumber = 0;
		int answer = 0;

		answer = firstNumber / secondNumber;
	}
	catch (const std::exception&)
	{
		cout << "\n\n Error: trying to devide two numbers.\n\n";
	}
	

	system("pause");
	return 0;

}
// this also doesn't work but idk why

/* try
	{
		int curAge;
		int futAge;

		cout << "\nWhat is your age?\n";
		cin >> curAge;

		if (curAge < 0) {
			throw 99;
		}

		cout << "You are " << curAge << endl;

		futAge = curAge + 15;
		cout << "You will be " << futAge << " in 15 years";
	}
	catch (const std::exception&)
	{
		cout << "\nERROR: Not a valid age!";
		main();
	} */