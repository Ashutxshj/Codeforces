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
        int pog = 0;
        for (int x : a)
        {
            pog ^= x;
        }
        if (pog == 0)
            cout << 0 << endl;
        else if (n % 2 == 1)
            cout << pog << endl;
        else
            cout << -1 << endl;
    }
}