
#include <iostream>
using namespace std;

int main()
{

    string str;
    str = "00000123569";
    int num = stoi(str);
    str = to_string(num);

    cout << "String after removing leading zeros is: "
         << str << endl;

    return 0;
}
