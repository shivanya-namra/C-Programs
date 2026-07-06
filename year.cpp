#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    // Leap year logic:
    // 1. Divisible by 400 → Leap year
    // 2. Divisible by 4 but not by 100 → Leap year
    // Otherwise → Not a leap year
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        cout << year << " is a Leap Year." << endl;
    } else {
        cout << year << " is NOT a Leap Year." << endl;
    }

    return 0;
}

