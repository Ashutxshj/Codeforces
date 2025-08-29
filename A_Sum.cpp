#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        bool ans = false;
        if (c == a + b || b == a + c || a == b + c)
            ans = true;
        ans ? cout << "YES" << endl : cout << "NO" << endl;
    }
}