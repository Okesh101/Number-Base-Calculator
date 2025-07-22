#include <iostream>
#include <vector>
#include <string>

using namespace std;

string decimalToHex(const int &decimal) {
    int decimalValue = decimal;
    int hexValue = 0;
    int base = 1; // 2^0

    while (decimalValue > 0) {
        int remainder = decimalValue % 16;
        hexValue += remainder * base;
        decimalValue /= 16;
        base *= 10; // Move to the next power of 16
    }

    std::string hexStr;
    if (decimalValue == 0 && hexValue == 0) {
        hexStr = "0";
    } else {
        int tempDecimal = decimal;
        while (tempDecimal > 0) {
            int remainder = tempDecimal % 16;
            if (remainder < 10)
                hexStr = static_cast<char>('0' + remainder) + hexStr;
            else
                hexStr = static_cast<char>('A' + (remainder - 10)) + hexStr;
            tempDecimal /= 16;
        }
    }

    return hexStr;
}

bool isValidDecimalHex(const string &decimal) {
    for (char c : decimal) {
        if (!isdigit(c)) {
            return false; // Invalid character found
        }
    }
    return true; // All characters are valid decimal digits
}

void printDecHex() { 
    string inputDecimal, returnHex;
    cout << "\nEnter the decimal number: "; 
    cin >> inputDecimal;
    // Validate the binary input
    if (!isValidDecimalHex(inputDecimal)) {
        cout << "Invalid decimal number. Please enter a valid decimal number." << endl;
        return; // Indicate an error
    }
    returnHex = decimalToHex(stoi(inputDecimal));

    cout << "\nThe Hexadecimal Equivalent for the Decimal number entered is: " << returnHex << endl;
}