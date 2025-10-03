#include <iostream>
#include <vector>
#include <string>
// #include "octalToBinary.h"

using namespace std;

int octalToDecimal(const std::string &octal) {
    int decimalValue = 0;
    int base = 1; // 8^0

    for (int i = octal.length() - 1; i >= 0; --i) {
        if (octal[i] < '0' || octal[i] > '7') {
            throw invalid_argument("Invalid octal digit");
        }
        decimalValue += (octal[i] - '0') * base;
        base *= 8; // Move to the next power of 8
    }

    return decimalValue;
}

bool isValidOctDec(const std::string &octal) {
    for (char c : octal) {
        if (c < '0' || c > '7') {
            return false; // Invalid character found
        }
    }
    return true; // All characters are valid octal digits
}

void printOctDec() {
    string inputOctal; 
    int returnDecimal;
    cout << "\nEnter the octal number: "; 
    cin >> inputOctal;
    // Validate the octal input
    if (!isValidOctDec(inputOctal)) {
        cout << "Invalid octal number. Please enter a valid octal number." << endl;
        return; // Indicate an error
    }
    returnDecimal = octalToDecimal(inputOctal);

    cout << "\nThe Decimal Equivalent for the Octal number entered is: " << returnDecimal << endl;
}