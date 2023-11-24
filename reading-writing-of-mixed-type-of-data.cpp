#include <iostream>
#include <fstream>

int main() {
    // Writing mixed data types to a file
    std::ofstream outputFile("mixed_data.txt");

    if (outputFile.is_open()) {
        int intValue = 42;
        double doubleValue = 3.14;
        char charValue = 'A';
        std::string stringValue = "Hello, World!";

        outputFile << intValue << " " << doubleValue << " " << charValue << " " << stringValue << std::endl;

        outputFile.close();
    } else {
        std::cerr << "Error opening the file for writing." << std::endl;
        return 1;
    }

    // Reading mixed data types from the file
    std::ifstream inputFile("mixed_data.txt");

    if (inputFile.is_open()) {
        int readInt;
        double readDouble;
        char readChar;
        std::string readString;

        inputFile >> readInt >> readDouble >> readChar >> readString;

        // Displaying the read values
        std::cout << "Read values: " << readInt << " " << readDouble << " " << readChar << " " << readString << std::endl;

        inputFile.close();
    } else {
        std::cerr << "Error opening the file for reading." << std::endl;
        return 1;
    }

    return 0;
}
