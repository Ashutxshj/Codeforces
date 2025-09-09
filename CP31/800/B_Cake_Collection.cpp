#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans +=a[i] * max(0LL, m - i);
        }
        cout << ans << endl;
    }
}