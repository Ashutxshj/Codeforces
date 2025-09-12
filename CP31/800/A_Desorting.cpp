#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int min_diff = 1e9;
        for (int i = 1; i < n; i++)
        {
            min_diff = min(a[i] - a[i - 1], min_diff);
        }
        bool pog = is_sorted(a.begin(), a.end());
        if (pog == false)
        {
            cout << 0 << "\n";
            continue;
        }
        else
        {
            if (min_diff == 1)
                cout << 1 << "\n";
            else
                cout << min_diff / 2 + 1 << "\n";
        }
    }
}