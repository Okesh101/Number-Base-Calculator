#include <iostream>
#include <vector>
#include <string>

using namespace std;

int octalToDecimalBin(const std::string &octal) {
    int decimalValue = 0;
    int base = 1; // 2^0

    for (int i = octal.length() - 1; i >= 0; --i) {
        if (octal[i] == '1') {
            decimalValue += base;
        }
        base *= 2; // Move to the next power of 2
    }

    return decimalValue;
}

int octalToBin(const string &octal) {
    int decimalValue = octalToDecimalBin(octal);
    int base = 1; // 10^0

    for (int i = octal.length() - 1; i >= 0; --i) {
        char digit = octal[i];
        if (digit < '0' || digit > '7') {
            throw invalid_argument("Invalid octal digit");
        }
        int octalDigit = digit - '0';
        int binarySegment = 0;
        int segmentBase = 1; // 2^0

        // Convert each octal digit to its binary equivalent
        for (int j = 0; j < 3; ++j) {
            binarySegment += (octalDigit % 2) * segmentBase;
            octalDigit /= 2;
            segmentBase *= 10; // Move to the next power of 2
        }

        decimalValue += binarySegment * base;
        base *= 1000; // Move to the next group of three binary digits
    }

    return decimalValue;
}

bool isValidOctBin(const std::string &octal) {
    for (char c : octal) {
        if (c < '0' || c > '7') {
            return false; // Invalid character found
        }
    }
    return true; // All characters are valid octal digits
}

void printOctBin() {
    string inputOctal;
    int returnBinary;
    cout << "\nEnter the octal number: ";
    cin >> inputOctal;
    // Validate the octal input
    if (!isValidOctBin(inputOctal)) {
        cout << "Invalid octal number. Please enter a valid octal number." << endl;
        return; // Indicate an error
    }
    returnBinary = octalToBin(inputOctal);

    cout << "\nThe Binary Equivalent for the Octal number entered is: " << returnBinary << endl;
}
