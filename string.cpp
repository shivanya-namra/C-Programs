#include <iostream>
#include <string>
using namespace std;

int main() {
   
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    // Method 1: Using built-in length() function
    cout << "Length using length(): " << str.length() << endl;

    // Method 2: Manual calculation using loop
    int count = 0;
    for (char c : str) {
        count++;
    }
    cout << "Length using manual loop: " << count << endl;

    return 0;
}
