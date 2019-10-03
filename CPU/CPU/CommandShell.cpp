#include "CommandShell.h"
#include <iostream>
#include <string>

void CommandShell::processUserInput(std::string userInput)
{
	try
	{
		if (userInput == "Help")
		{
			DisplayHelp();
		}
		else if (userInput == "load")
		{
			std::cout << "\n\n Command Valid, but not enabled!\n";
		}
		else if (userInput == "Run")
		{

		}
		else if (userInput == "Exit")
		{
			std::cout << "\n\n Command Valid, but not enabled!\n";
		}
		else if (userInput == "TestMemoryPush")
		{
			std::cout << "\n\n Command Valid, but not enabled!\n";
		}
		else if (userInput == "TestMemoryView")
		{
			std::cout << "\n\n Command Valid, but not enabled!\n";
		}
		else
		{
			std::cout << "\n\n Not a valid command!\n";
		}
	}
	catch (const std::exception&)
	{

	}
}

void CommandShell::DisplayHelp()
{
	std::cout << "\n\n\t **** Help Valid Commands ****\n\n";
	std::cout << "\nHelp";
	std::cout << "\nRun - Start the program in memory.";
	std::cout << "\nLoad - Load the source to memory.";
	std::cout << "\nExit - Leave the shell.";
	std::cout << "\nTestMemoryPush - Test inserting a value into a location in memory.";
	std::cout << "\nTestMemoryView - Test viewing a value from a location in memory.\n\n";
}
