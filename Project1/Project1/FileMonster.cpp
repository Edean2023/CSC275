#include <iostream>
#include <fstream>

int main() {
	std::cout << "\n\n\t\t ### Welcome to File Monster ### \n";

	// creating a file stream object 
	std::ofstream myFile;
	// opens the file
	// work with the physical file
	myFile.open("referenceCPP.txt");
	// pushes text to the file stream
	myFile << "C++ is pretty neat.\n";
	// closes the opened file so it doesn't get corrupted
	myFile.close();

	system("pause");
	return 0;
}