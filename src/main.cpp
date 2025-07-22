#include "_init_.h"
#include <iostream>

int main()
{
    initialize();

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
        printBinOct();
        break;
    case 3:
        // Binary to Hexadecimal
        printBinHex();
        break;
    case 4:
        // Decimal to Binary
        printDecBinary();
        break;
    case 5:
        // Decimal to Octal
        printDecOctal();
        break;
    case 6:
        // Decimal to Hexadecimal
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
