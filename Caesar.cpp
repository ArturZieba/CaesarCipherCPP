#include "Caesar.h"
#include <fstream> // For std::ofstream, std::ifstream, and std::fstream
#include <iostream> // For std::cout
#include <sstream> // For std::stringstream
#include <string> // For std::string


int main()
{
	std::ofstream outputStream; // Output file stream object, only for writing data into a file
	outputStream.open("outputStream.txt"); // Open a stream for a file with provided name
	outputStream << "Test123tseT"; // Write data into the stream object
	outputStream.close(); // Closes the stream

	std::ifstream inputStream; // Input file stream object, only for reading data from a file
	inputStream.open("outputStream.txt"); // Open a stream for a file with provided name
	std::stringstream stringStream; // String stream object
	stringStream << inputStream.rdbuf(); // Write input stream buffer content into the string stream
	std::string inputString = stringStream.str(); // Write string stream content into a string variable
	std::cout << inputString; 
	inputStream.close(); // Closes the stream
}