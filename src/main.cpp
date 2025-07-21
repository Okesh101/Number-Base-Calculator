#include "_init_.h"
#include <iostream>

int main()
{
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

    int choice;
    cout << "\nEnter your choice (1-12): ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        // Binary to Decimal
        printBinDec();
        break;
    case 2:
        // Binary to Octal
        break;
    case 3:
        // Binary to Hexadecimal
        break;
    case 4:
        printDecBinary();
        break;
    case 5:
        // Decimal to Octal
        break;
    case 6:
        printDecHex();
        break;
    case 7:
        // Octal to Binary
        break;
    case 8:
        // Octal to Decimal
        break;
    case 9:
        // Octal to Hexadecimal
        break;
    case 10:
        // Hexadecimal to Binary
        break;
    case 11:
        // Hexadecimal to Decimal
        break;
    case 12:
        // Hexadecimal to Octal
        break;
    default:
        break;
    }


    return 0;
}
