#include <iostream>
using namespace std;

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    
    int num = decimal;
    long long binary = 0;
    int place = 1;
    while (num > 0) {
        int rem = num % 2;
        binary += rem * place;
        place *= 10;
        num /= 2;
    }
    cout << "Binary: " << binary << endl;

    
    num = decimal;
    int octal = 0;
    place = 1;
    while (num > 0) {
        int rem = num % 8;
        octal += rem * place;
        place *= 10;
        num /= 8;
    }
    cout << "Octal: " << octal << endl;

    return 0;
}