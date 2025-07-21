#include <iostream>
#include <string>

using namespace std;

int binaryToDecimalOct(const std::string &binary) {
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

int binaryToOctal(const std::string &binary) {
    int decimalValue = binaryToDecimalOct(binary);
    int octalValue = 0;
    int base = 1; // 8^0

    while (decimalValue > 0) {
        int remainder = decimalValue % 8;
        octalValue += remainder * base;
        decimalValue /= 8;
        base *= 10; // Move to the next power of 8
    }

    return octalValue;
}

bool isValidBinaryOct(const std::string &binary) {
    for (char c : binary) {
        if (c != '0' && c != '1') {
            return false; // Invalid character found
        }
    }
    return true; // All characters are valid binary digits
}

void printBinOct() {
    string inputBinary; 
    int returnOctal;
    cout << "\nEnter the binary number: "; 
    cin >> inputBinary;
    // Validate the binary input
    if (!isValidBinaryOct(inputBinary)) {
        cout << "Invalid binary number. Please enter a valid binary number." << endl;
        return; // Indicate an error
    }
    returnOctal = binaryToOctal(inputBinary);

    cout << "\nThe Octal Equivalent for the Binary number entered is: " << returnOctal << endl;
}