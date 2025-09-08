#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    if (n == 1)
        cout << 1 << endl;
    else if (n == 2 || n == 3)
        cout << "NO SOLUTION" << endl;
    else
    {
        vector<ll> a;
        for (ll i = 1; i < n + 1; i++)
        {
            if (((i & 1) == 0))
                a.push_back(i);
        }
        for (ll i = 1; i < n + 1; i++)
        {
            if (((i & 1) == 1))
                a.push_back(i);
        }
        for (ll i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }
}