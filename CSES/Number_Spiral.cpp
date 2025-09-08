//! Do again
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> y >> x;
        if (y > x)
        {
            ll ans = (y - 1) * (y - 1);
            if ((y & 1) == 1)
                ans += x;
            else
                ans += (2 * y - x);
            cout << ans << endl;
        }
        else
        {
            ll ans = (x - 1) * (x - 1);
            if ((x & 1) == 0)
                ans += y;
            else
                ans += (2 * x - y);
            cout << ans << endl;
        }
    }
}