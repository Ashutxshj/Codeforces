#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    bool ans = false;
    for (char c : s)
    {
        if (c == 'H' || c == 'Q' || c == '9')
        {
            ans = true;
        }
    }
    ans ? cout << "YES" << endl : cout << "NO" << endl;
}