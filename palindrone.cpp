#include <iostream>
using namespace std;

int main() {
    int num, original, reversed = 0;
    cout << "Enter a number: ";
    cin >> num;

    original = num;  // store the original number

    while (num != 0) {
        int digit = num % 10;          // extract last digit
        reversed = reversed * 10 + digit; // build reversed number
        num = num / 10;                // remove last digit
    }

    if (original == reversed)
        cout << original << " is a Palindrome." << endl;
    else
        cout << original << " is NOT a Palindrome." << endl;

    return 0;
}

