#include <iostream>
#include <string>
using namespace std;
bool magicNo(int n)
{
    string s = to_string(n);
    for (char c : s)
    {
        if (c != '1' && c != '4')
            return false;
    }
    if (s[0] == '4')
        return false;
    if (s.find("444") != s.npos)
        return false;
    return true;
}
int main()
{
    int n;
    cin >> n;
    cout << (magicNo(n) ? "YES" : "NO") << endl;
}