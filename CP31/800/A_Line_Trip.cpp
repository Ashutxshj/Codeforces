#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n + 2);
        a[0] = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i + 1];
        }
        a[n + 1] = x;
        int ans = 0, carry = 0;
        for (int i = 1; i < n + 2; i++)
        {
            int diff = a[i] - a[i - 1];
            ans = max(ans, diff);
        }
        ans = max(ans, 2 * (a[n + 1] - a[n]));
        cout << ans << endl;
    }
}