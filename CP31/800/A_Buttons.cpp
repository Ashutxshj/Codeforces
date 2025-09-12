#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a > b)
            cout << "First" << endl;
        else if (a < b)
            cout << "Second" << endl;
        else
        {
            if ((c & 1) == 1)
                cout << "First" << endl;
            else
                cout << "Second" << endl;
        }
    }
}