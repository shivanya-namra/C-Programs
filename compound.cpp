#include <iostream>
#include <cmath>
using namespace std;


int main() {
    double principal,rate,time,amount,compoundInterest;

    cout << "Enter principal Amount: ";
    cin >> principal;

    cout << "Enter Rate of Interest: ";
    cin >> rate;

    cout << "Enter Time (in years): ";
    cin >> time;

    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    cout << "Compound Interest = " << compoundInterest << endl;


    return 0;
}
