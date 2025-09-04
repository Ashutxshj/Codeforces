#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int ans = 0;
        int n;
        cin >> n;
        vector<int> a(n - 1);
        for (int i = 0; i < n - 1; i++)
        {
            cin >> a[i];
        }
        for (int i : a)
        {
            ans += i;
        }
        cout << ans * -1 << endl;
    }
}