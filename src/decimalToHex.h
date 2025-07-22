// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// int decHexDictionary(int dec) {
//     int hex;
//     if (dec == 0)
//         hex = 0;
//     else if (dec == 1)
//         hex = 1;
//     else if (dec == 2)
//         hex = 2;
//     else if (dec == 3)
//         hex = 3;
//     else if (dec == 4)
//         hex = 4;
//     else if (dec == 5)
//         hex = 5;
//     else if (dec == 6)
//         hex = 6;
//     else if (dec == 7)
//         hex = 7;
//     else if (dec == 8)
//         hex = 8;
//     else if (dec == 9)
//         hex = 8;
//     else if (dec == 9)
//         hex = 9;
//     else if (dec == 10)
//         hex = 'A';
//     else if (dec == 11)
//         hex = 'B';
//     else if (dec == 12)
//         hex = 'C';
//     else if (dec == 13)
//         hex = 'D';
//     else if (dec == 14)
//         hex = 'E';
//     else if (dec == 15)
//         hex = 'F';
//     else
//         return 0;

//     return hex;
// }

// int converterDec2Hex(vector<int> decimalList) {
//     int size = decimalList.size();
//     vector<int> newBinList;
//     for (int i = 1; i < size; i++) {
//         int number = decimalList[size - i];
//         int bin = (number * 16) ^ (i - 1);
//         newBinList.push_back(bin);
//     }
//     int Gnumber = 0;
//     for (int l = 0; l < newBinList.size(); l++) {
//         int number = newBinList[l];
//         Gnumber += number;
//     }
//     return Gnumber;
// }

// int decimalToHexConverter(int decimal) {
//     vector<int> decimalNumber;
    
//     string decimalString = to_string(decimal);
//     // int decimalSize = decimalString.size();
//     for (char decimalChar : decimalString) {
//         decimalNumber.push_back(decimalChar);
//     }
//     int decimalFinal = converterDec2Hex(decimalNumber);

//     return decimalFinal;
// }

// int decimalToHexFunc() {
//     int inputDecimal, returnHex;
//     cout << "\nEnter the decimal number: "; 
//     cin >> inputDecimal;
//     returnHex = decimalToHexConverter(inputDecimal);
//     return returnHex;
// }

// void printDecHex() {
//     int hexNumber = decimalToHexFunc();
//     cout << "\nThe Hexadecimal Equivalent for the Decimal number entered is: " << hexNumber << endl;
// }

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