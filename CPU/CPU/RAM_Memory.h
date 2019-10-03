#pragma once
class RAM_Memory
{
public:
	// Get memory at index location you pass in
	int GetMemoryValue(int memoryIndex);
	// set memory value at index location you pass in
	// also passes in the value to set
	void SetMemoryValue(int memoryIndex, int memoryValue);

private:
	// Memory that holds the data for the CPU 
	int RAM[100];


};

