#pragma once
#include <iostream>
#include <string>
class CommandShell
{
public:
	void processUserInput(std::string userInput);

private:
	void DisplayHelp();

};

