#include <iostream>	
#include <fstream>
#include <string>

int main() {
	std::cout << "\n\t\t ### File Reading Monster ###\n";
	std::string line;
	std::ifstream myFile("referenceCPP.txt");

	if (myFile.is_open()) {
		while (std::getline(myFile, line)) {
			std::cout << line << "\n";
		}
		myFile.close();
	}
	else {
		std::cout << "File cannot be found or opened.\n";
	}

	system("pause");
	return 0;
}