#include "binaryToDecimal.h"
#include "binaryToOctal.h"
#include "binaryToHex.h"
#include "decimalToBinary.h"
#include "decimalToOctal.h"
#include "decimalToHex.h"
#include "octalToBinary.h"
#include "octalToDecimal.h"
#include "octalToHex.h"
#include "hexToBinary.h"
#include "hexToDecimal.h"
#include "hexToOctal.h"

#include <string>

using namespace std;

void initialize() {
    cout << "Welcome to the Number Base Calculator!" << endl;
    cout << "This calculator supports conversions between binary, decimal, octal, and hexadecimal number systems." << endl;
    cout << "Please select an option from the menu below:" << endl << endl;

    cout << "1. Binary to Decimal" << endl;
    cout << "2. Binary to Octal" << endl;
    cout << "3. Binary to Hexadecimal" << endl;
    cout << "4. Decimal to Binary" << endl;
    cout << "5. Decimal to Octal" << endl;
    cout << "6. Decimal to Hexadecimal" << endl;
    cout << "7. Octal to Binary" << endl;
    cout << "8. Octal to Decimal" << endl;
    cout << "9. Octal to Hexadecimal" << endl;
    cout << "10. Hexadecimal to Binary" << endl;
    cout << "11. Hexadecimal to Decimal" << endl;
    cout << "12. Hexadecimal to Octal" << endl;
}