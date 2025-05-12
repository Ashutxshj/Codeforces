#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if (islower(s[0]))
        s[0] = toupper((int)s[0]);
    cout << s;
}