#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int binaryToDecimal(const std::string &binary) {
    int decimalValue = 0;
    int base = 1; // 2^0

    for (int i = binary.length() - 1; i >= 0; --i) {
        if (binary[i] == '1') {
            decimalValue += base;
        }
        base *= 2; // Move to the next power of 2
    }

    return decimalValue;
}

// Function to check if user input is a valid binary number
bool isValidBinary(const std::string &binary) {
    for (char c : binary) {
        if (c != '0' && c != '1') {
            return false; // Invalid character found
        }
    }
    return true; // All characters are valid binary digits
}

// int binaryToDecFunc() {
//     string inputBinary; 
//     int returnDecimal;
//     cout << "\nEnter the binary number: "; 
//     cin >> inputBinary;
//     // Validate the binary input
//     if (!isValidBinary(inputBinary)) {
//         cout << "Invalid binary number. Please enter a valid binary number." << endl;
//         return -1; // Indicate an error
//     }
//     returnDecimal = binaryToDecimal(inputBinary);
//     return returnDecimal;
// }

void printBinDec() {
    string inputBinary; 
    int returnDecimal;
    cout << "\nEnter the binary number: "; 
    cin >> inputBinary;
    // Validate the binary input
    if (!isValidBinary(inputBinary)) {
        cout << "Invalid binary number. Please enter a valid binary number." << endl;
        return; // Indicate an error
    }
    returnDecimal = binaryToDecimal(inputBinary);

    cout << "\nThe Decimal Equivalent for the Binary number entered is: " << returnDecimal << endl;
}
