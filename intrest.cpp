#include <iostream>
using namespace std;

int main() {
    float principal, rate, time, simpleInterest;

    cout << "Enter Principal amount: ";
    cin >> principal;

    cout << "Enter Rate of interest (in %): ";
    cin >> rate;

    cout << "Enter Time (in years): ";
    cin >> time;

    simpleInterest = (principal * rate * time) / 100;

    cout << "\nThe Simple Interest is: " << simpleInterest << endl;
    cout << "Total Amount (Principal + Interest): " << (principal + simpleInterest) << endl;

    return 0;
}
