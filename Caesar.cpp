#include "Caesar.h"
#include <fstream> // For std::ofstream, std::ifstream, and std::fstream
#include <iostream> // For std::cout
#include <sstream> // For std::stringstream
#include <string> // For std::string

// TODO: Input can be entered in the Command Prompt
std::string inputCommandPrompt()
{
	std::string inputData; // Variable for storing Command Prompt input

	std::ofstream outputStream; // Output file stream object, only for writing data into a file
	outputStream.open("outputStream.txt"); // Open a stream for a file with provided name
	std::cout << "Input a string: ";
	std::cin >> inputData; // Get Command Prompt input
	outputStream << inputData; // Write data into the stream object
	outputStream.close(); // Closes the stream

	return inputData;
}

// TODO: Input can be entered through a text file
std::string inputTextFile()
{
	return "inputTextFile() PH";
}

// TODO: Output can be returned to the Command Prompt
void outputCommandPrompt(std::string inputData)
{
	std::cout << "Command Prompt output" << '\n';
}

// TODO: Output can be returned as a text file
void outputTextFile(std::string inputData)
{
	std::ifstream inputStream; // Input file stream object, only for reading data from a file
	inputStream.open("outputStream.txt"); // Open a stream for a file with provided name
	std::stringstream stringStream; // String stream object
	stringStream << inputStream.rdbuf(); // Write input stream buffer content into the string stream
	std::string inputString = stringStream.str(); // Write string stream content into a string variable
	std::cout << inputString;
	inputStream.close(); // Closes the stream
}

// TODO: Brute-force option that writes out all possible 0 - 25 shifts for the entered string to the Command Prompt
void outputAllPossibleCiphersCommandPrompt(std::string inputData)
{
	std::cout << "Output all possible ciphers to the Command Prompt" << '\n';
}

// TODO: Brute-force option that writes out all possible 0 - 25 shifts for the entered string to a text file
void outputAllPossibleCiphersTextFile(std::string inputData)
{
	std::cout << "Output all possible ciphers to a text file" << '\n';
}

int main()
{
	// Caesar cipher works by replacing (shifting) letters with other letters to their left by 0 - 25. For example A shifted by 0 is A; shifted by 2 is Y; shifted by 25 is B.
	// Code implementation of this mechanic would require an input string, shift number, and outputting the modified string.

	std::cout << "Choose input type: " << '\n';
	std::cout << "Type 0 to use Command Prompt for input" << '\n';
	std::cout << "Type 1 to use a text file for input" << '\n';

	int userInputSelection;

	std::cout << '\n' << "Your selection: ";
	std::cin >> userInputSelection;
	std::cout << '\n';

	switch (userInputSelection)
	{
	case 0:
		std::cout << "Chose 0" << '\n';
		inputCommandPrompt();
		break;
	case 1:
		std::cout << "Chose 1" << '\n';
		inputTextFile();
		break;
	default:
		std::cout << "Not listed input" << '\n'; //TODO: Return to selection? ("Unsupported input, please try again:")
	}

	std::cout << "Choose output type: " << '\n';
	std::cout << "Type 0 to use Command Prompt for output" << '\n';
	std::cout << "Type 1 to use a text file for output" << '\n';
	std::cout << "Type 2 to output all possible ciphers into the Command Prompt" << '\n';
	std::cout << "Type 3 to output all possible ciphers into a text file" << '\n';

	int userOutputSelection;

	std::cout << '\n' << "Your selection: ";
	std::cin >> userOutputSelection;
	std::cout << '\n';

	switch (userOutputSelection)
	{
	case 0:
		std::cout << "Chose 0" << '\n';
		outputCommandPrompt("Option 0");
		break;
	case 1:
		std::cout << "Chose 1" << '\n';
		outputTextFile("Option 1");
		break;
	case 2:
		std::cout << "Chose 2" << '\n';
		outputAllPossibleCiphersCommandPrompt("Option 2");
		break;
	case 3:
		std::cout << "Chose 3" << '\n';
		outputAllPossibleCiphersTextFile("Option 3");
		break;
	default:
		std::cout << "Not listed input" << '\n'; //TODO: Return to selection? ("Unsupported input, please try again:")
	}
}