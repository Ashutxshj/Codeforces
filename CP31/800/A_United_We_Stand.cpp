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
        set<int> st(a.begin(), a.end());
        sort(a.begin(), a.end());
        int lol = a[0];
        vector<int> b, c;
        for (int i : a)
        {
            if (i == lol)
                b.push_back(i);
            else
                c.push_back(i);
        }
        if (st.size() == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << b.size() << " " << c.size() << endl;
            for (int i : b)
            {
                cout << i << " ";
            }
            cout << endl;
            for (int i : c)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
}