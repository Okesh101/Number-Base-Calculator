#include <iostream>
#include <vector>
#include <string>

using namespace std;

int decimalToBin(const int &decimal) {
    int decimalValue = decimal;
    int binaryValue = 0;
    int base = 1; // 2^0

    while (decimalValue > 0) {
        int remainder = decimalValue % 2;
        binaryValue += remainder * base;
        decimalValue /= 2;
        base *= 10; // Move to the next power of 2
    }

    return binaryValue;
}

bool isValidDecimal(const string &decimal) {
    for (char c : decimal) {
        if (!isdigit(c)) {
            return false; // Invalid character found
        }
    }
    return true; // All characters are valid decimal digits
}

void printDecBinary() { 
    int returnBinary;
    string inputDecimal;
    cout << "\nEnter the decimal number: "; 
    cin >> inputDecimal;
    // Validate the binary input
    if (!isValidDecimal(inputDecimal)) {
        cout << "Invalid decimal number. Please enter a valid decimal number." << endl;
        return; // Indicate an error
    }
    returnBinary = decimalToBin(stoi(inputDecimal));

    cout << "\nThe Binary Equivalent for the Decimal number entered is: " << returnBinary << endl;
}