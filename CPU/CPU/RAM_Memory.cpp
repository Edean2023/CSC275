#include "RAM_Memory.h"
#include <iostream>

int RAM_Memory::GetMemoryValue(int memoryIndex)
{
	try
	{
		int memoryValue = RAM[memoryIndex];
		return memoryValue;
	}
	catch (const std::exception&)
	{
		std::cout << "\n ERROR: When trying to get memory value at memory location index " << memoryIndex << std::endl;
	}

}

void RAM_Memory::SetMemoryValue(int memoryIndex, int memoryValue)
{
	try
	{
		// setting the value of the memory at an index location you choose
		RAM[memoryIndex] = memoryValue;
	}
	catch (const std::exception&)
	{
		std::cout << "\n ERROR: When trying to set memory value.\n" << memoryValue << " at location index " << memoryIndex << std::endl;
	}
	
}

