#include <iostream>
#include <vector>
#include <string>

using namespace std;

int octalToDecimalHex(const std::string &octal) {
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

string octalToHex(const string &octal) {
    int decimalValue = octalToDecimalHex(octal);
    int base = 1; // 16^0
    string hexValue = "";

    while (decimalValue > 0) {
        int remainder = decimalValue % 16;
        if (remainder < 10) {
            hexValue = char(remainder + '0') + hexValue;
        } else {
            hexValue = char(remainder - 10 + 'A') + hexValue;
        }
        decimalValue /= 16;
    }

    return hexValue;
}

bool isValidOctHex(const std::string &oct) {
    for (char c : oct) {
        if (c < '0' || c > '7') {
            return false; // Invalid character found
        }
    }
    return true; // All characters are valid octal digits
}

void printOctHex() {
    string inputOctal; 
    string returnHex;
    cout << "\nEnter the octal number: "; 
    cin >> inputOctal;
    // Validate the octal input
    if (!isValidOctHex(inputOctal)) {
        cout << "Invalid octal number. Please enter a valid octal number." << endl;
        return; // Indicate an error
    }
    returnHex = octalToHex(inputOctal);

    cout << "\nThe Hexadecimal Equivalent for the Octal number entered is: " << returnHex << endl;
}