#include <iostream>
#include <string>

using namespace std;

int binaryToDecimalHex(const std::string &binary) {
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

string binaryToHex(const std::string &binary) {
    int decimalValue = binaryToDecimalHex(binary);
    int hexValue = 0;
    int base = 1; // 16^0

    while (decimalValue > 0) {
        int remainder = decimalValue % 16;
        hexValue += remainder * base;
        decimalValue /= 16;
        base *= 10; // Move to the next power of 16
    }

    // Convert decimalValue to hexadecimal string
    std::string hexStr;
    if (decimalValue == 0 && hexValue == 0) {
        hexStr = "0";
    } else {
        int tempDecimal = binaryToDecimalHex(binary);
        while (tempDecimal > 0) {
            int remainder = tempDecimal % 16;
            if (remainder < 10)
                hexStr = static_cast<char>('0' + remainder) + hexStr;
            else
                hexStr = static_cast<char>('A' + (remainder - 10)) + hexStr;
            tempDecimal /= 16;
        }
    }
    // cout << "\nThe Hexadecimal Equivalent for the Binary number entered is: " << hexStr << endl;
    return hexStr; // or you can change the function to return std::string
}

bool isValidBinaryHex(const std::string &binary) {
    for (char c : binary) {
        if (c != '0' && c != '1') {
            return false; // Invalid character found
        }
    }
    return true; // All characters are valid binary digits
}

void printBinHex() {
    string inputBinary, returnHex;
    cout << "\nEnter the binary number: "; 
    cin >> inputBinary;
    // Validate the binary input
    if (!isValidBinaryHex(inputBinary)) {
        cout << "Invalid binary number. Please enter a valid binary number." << endl;
        return; // Indicate an error
    }
    returnHex = binaryToHex(inputBinary);

    cout << "\nThe Hexadecimal Equivalent for the Binary number entered is: " << returnHex << endl;
}