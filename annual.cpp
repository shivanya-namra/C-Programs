#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double principal, rate, time, compoundInterest;
    int n;

    cout << "Enter Principal amount: ";
    cin >> principal;

    cout << "Enter Annual Interest Rate (in %): ";
    cin >> rate;

    cout << "Enter Time (in years): ";
    cin >> time;

    cout << "Enter number of times interest is compounded per year: ";
    cin >> n;

    double amount = principal * pow((1 + (rate / 100) / n), n * time);
    compoundInterest = amount - principal;

    cout << "Compound Interest = " << compoundInterest << endl;
    cout << "Total Amount after " << time << " years = " << amount << endl;

    return 0;
}
