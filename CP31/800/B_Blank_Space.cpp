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
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                int j = i;
                int pog = 0;
                while (a[j] == 0 && j < n)
                {
                    pog++;
                    j++;
                }
                ans = max(ans, pog);
            }
        }
        cout << ans << endl;
    }
}