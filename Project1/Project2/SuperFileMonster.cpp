#include <iostream>
#include <fstream>

void WriteToFile() {
	// stores the number of keywords
	int k = 0;
	// stores the number of reserved words 
	int r = 0;

	std::ofstream myFile("CPP_Enhanced_Reference.txt");
	if (myFile.is_open()) {
		myFile << "asm - Declaration of an inline assembly block\n";
		myFile << "auto - auto placeholder type specifier\n";
		myFile << "bool - data type which only holds values true or false\n\n";

		myFile << "and - an alternative for &&\n";

		myFile.close();
	}
	else {
		std::cout << "I can't find your file!\n";
	}
}

int main() {
	std::cout << "\n\n\t\t ### C++ Reference Created ### \n";

	WriteToFile();

	system("pause");
	return 0;
}
