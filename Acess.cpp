#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello World";

    // Access characters using index []
    cout << "First character: " << str[0] << endl;
    cout << "Fifth character: " << str[4] << endl;

    // Access characters using at()
    cout << "First character (at): " << str.at(0) << endl;
    cout << "Fifth character (at): " << str.at(4) << endl;

    // Loop through all characters
    cout << "All characters: ";
    for (int i = 0; i < str.length(); i++) {
        cout << str[i] << " ";
    }
    cout << endl;

    return 0;
}
