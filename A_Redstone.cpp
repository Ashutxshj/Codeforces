#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool solve(vector<ll> a)
{
    if (a.empty())
        return false;
    if (a.size() == 1)
        return true;
    sort(a.begin(), a.end());
    if (a[0] / a[1] == 1)
        return true;
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        solve(a) ? cout << "YES" << endl : cout << "NO" << endl;
    }
}