#include <iostream>
#include <vector>
#include <string>

using namespace std;

int hexToDecimalOct(const std::string &hex) {
    int decimalValue = 0;
    int base = 1; // 2^0

    for (int i = hex.length() - 1; i >= 0; --i) {
        char c = hex[i];
        int hexDigit;
        if (c >= '0' && c <= '9') {
            hexDigit = c - '0';
        } else if (c >= 'A' && c <= 'F') {
            hexDigit = c - 'A' + 10;
        } else {
            throw invalid_argument("Invalid hexadecimal digit");
        }
        decimalValue += hexDigit * base;
        base *= 16; // Move to the next power of 16
    }

    return decimalValue;
}

int hexToOctal(const string &hex) {
    int decimalValue = hexToDecimalOct(hex);
    int octalValue = 0;
    int base = 1; // 2^0

    while (decimalValue > 0) {
        int remainder = decimalValue % 8;
        octalValue += remainder * base;
        decimalValue /= 8;
        base *= 10; // Move to the next power of 8
    }

    return octalValue;
}

bool isValidHexOct(const string &hex) {
    for (char c : hex) {
        if (!isxdigit(c)) {
            return false; // Invalid character found
        }
    }
    return true; // All characters are valid hexadecimal digits
}

void printHexOct() {
    int returnOctal;
    string inputHex;
    cout << "\nEnter the hexadecimal number: ";
    cin >> inputHex;
    // Validate the hexadecimal input
    if (!isValidHex(inputHex)) {
        cout << "Invalid hexadecimal number. Please enter a valid hexadecimal number." << endl;
        return; // Indicate an error
    }
    returnOctal = hexToOctal(inputHex);

    cout << "\nThe Octal Equivalent for the Hexadecimal number entered is: " << returnOctal << endl;
}