
#include <iostream>

using namespace std;

void compareFunction(string s1, string s2)
{
  
    int x = s1.compare(s2);

    if (x != 0) {
        cout << s1 
             << " is not equal to " 
             << s2 << endl;
        if (x > 0)
            cout << s1 
                 << " is greater than " 
                 << s2 << endl;
        else
            cout << s2 
                 << " is greater than " 
                 << s1 << endl;
    }
    else
        cout << s1 << " is equal to " << s2 << endl;
}


int main()
{
    string s1("Geeks");
    string s2("forGeeks");
    compareFunction(s1, s2);
    string s3("Geeks");
    string s4("Geeks");
    compareFunction(s3, s4);
    return 0;
}
