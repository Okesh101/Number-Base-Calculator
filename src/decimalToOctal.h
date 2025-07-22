#include <iostream>
#include <vector>
#include <string>

using namespace std;

int decimalToOctal(const int &decimal) {
    int decimalValue = decimal;
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

bool isValidDecimalOct(const string &decimal) {
    for (char c : decimal) {
        if (!isdigit(c)) {
            return false; // Invalid character found
        }
    }
    return true; // All characters are valid decimal digits
}

void printDecOctal() { 
    int returnOctal;
    string inputDecimal;
    cout << "\nEnter the decimal number: "; 
    cin >> inputDecimal;
    // Validate the binary input
    if (!isValidDecimalOct(inputDecimal)) {
        cout << "Invalid decimal number. Please enter a valid decimal number." << endl;
        return; // Indicate an error
    }
    returnOctal = decimalToOctal(stoi(inputDecimal));

    cout << "\nThe Octal Equivalent for the Decimal number entered is: " << returnOctal << endl;
}