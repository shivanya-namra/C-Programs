#include <iostream>
#include <string>

using namespace std;

void replaceChar(string& S, char c1, char c2) {
    string s1, s2;
    for (char c : S) {
        if (c == c1) {
            s1 += c2;
            s2 += c1;
        } else if (c == c2) {
            s1 += c1;
            s2 += c2;
        } else {
            s1 += c;
            s2 += c;
        }
    }
    S = s1;
}

int main() {
    string S = "Omkhaz";
    char c1 = 'z', c2 = 'r';

    // Replace characters in string
    replaceChar(S, c1, c2);

    // Print modified string
    cout << "Modified string: " << S << endl;

    return 0;
}
