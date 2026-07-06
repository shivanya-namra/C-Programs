#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;

    int sum = 0;

    // Using loop
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "Sum of first " << n << " natural numbers = " << sum << endl;

    // Alternatively, using formula: n*(n+1)/2
    int formulaSum = n * (n + 1) / 2;
    cout << "Using formula: " << formulaSum << endl;

    return 0;
}

