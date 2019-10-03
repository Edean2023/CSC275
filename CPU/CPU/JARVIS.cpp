#include <iostream>
#include <string>
#include "CommandShell.h"

int main() {
	std::cout << "\n\n\t *** J.A.R.V.I.S Online ***\n\n";

	std::cout << "\nPlease type in command > ";

	std::string userCommand;
	getline(std::cin, userCommand);

	CommandShell command_shell;
	command_shell.processUserInput(userCommand);
		


	system("pause");
	return 0;
}