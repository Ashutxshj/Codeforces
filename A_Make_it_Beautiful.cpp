#include <bits/stdc++.h>
using namespace std;
int main()
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
        int mx = INT_MIN, mi = INT_MAX;
        for (int i : a)
        {
            mx = max(mx, i);
            mi = min(mi, i);
        }
        if (mx == mi)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            cout << a[n - 1] << " ";
            for (int i = 0; i < n - 1; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
}