#include <bits/stdc++.h>
using namespace std;


void revStr(string &s, int l, int r) {
  
   
    if (l >= r)
        return;

   
    swap(s[l], s[r]);

  
    revStr(s, l + 1, r - 1);
}

int main() {
    string s = "Hello World";

   
    revStr(s, 0, s.length() - 1);

    cout << s;
    return 0;
}
