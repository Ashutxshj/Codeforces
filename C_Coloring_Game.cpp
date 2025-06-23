#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
// Bye bye American Pie
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int gmax = a[n - 1];
        int smax = a[n - 2];

        ll ans = 0;
        for (int k = 2; k < n; k++)
        {
            ll t1 = 2LL * a[k];
            ll t2 = (k == n - 1 ? smax : gmax);
            ll T = max(t1, t2);
            ll X = T - a[k];

            int l = 0, r = k - 1;
            while (l < r)
            {
                ll sum = (ll)a[l] + a[r];
                if (sum > X)
                {
                    ans += (r - l);
                    r--;
                }
                else
                {
                    l++;
                }
            }
        }

        cout << ans << "\n";
    }
    return 0;
}