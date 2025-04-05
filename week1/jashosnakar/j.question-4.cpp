#include <iostream>
using namespace std;

int main() {
    long long int decimal, binary = 0, octal = 0;
    int rem;
    long long int place = 1;

    cout << "Enter a decimal number: ";
    cin >> decimal;

    long long int original = decimal;

    // Decimal to Binary
    while (decimal > 0) {
        rem = decimal % 2;
        binary = binary + rem * place;
        decimal = decimal / 2;
        place = place * 10;
    }

    cout << "Binary of " << original << " is: " << binary << endl;

    // Reset values
    decimal = original;
    place = 1;

    // Decimal to Octal
    while (decimal > 0) {
        rem = decimal % 8;
        octal = octal + rem * place;
        decimal = decimal / 8;
        place = place * 10;
    }

    cout << "Octal of " << original << " is: " << octal << endl;

    return 0;
}
