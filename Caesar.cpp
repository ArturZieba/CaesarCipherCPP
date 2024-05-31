#include "Caesar.h"
#include <fstream> // For std::ofstream, std::ifstream, and std::fstream
#include <iostream> // For std::cout

int main()
{
	std::ofstream outputFile; // Output file stream object, only for writing data into a file
	outputFile.open("outputFile.txt"); // Open a file with provided name
	outputFile << "Test"; // Write data into the stream object
	outputFile.close(); // Closes the file associated with the stream object
}