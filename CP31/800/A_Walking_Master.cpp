#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (d < b)
            cout << -1 << endl;
        else
        {
            int ans = 0;
            int diff = d - b;
            int x = a + diff;
            ans += d - b;
            if (x < c)
                cout << -1 << endl;
            else
            {
                ans += x - c;
                cout << ans << endl;
            }
        }
    }
}