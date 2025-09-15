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
        vector<int> prefix(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            prefix[i + 1] = prefix[i] + a[i];
        }
        int total_sum = prefix[n];
        bool found = false;
        int i = 0, j = 0;

        for (int l = 1; l < n - 1 && !found; l++)
        {
            int rem1 = 0, rem2 = 0, rem3 = 0;
            for (int r = l + 1; r < n && !found; r++)
            {
                rem1 = prefix[l] % 3;
                rem2 = (prefix[r] - prefix[l]) % 3;
                rem3 = (total_sum - prefix[r]) % 3;
                if ((rem1 == rem2 && rem2 == rem3) || (rem1 != rem2 && rem2 != rem3 && rem1 != rem3))
                {
                    i = l;
                    j = r;
                    found = true;
                }
            }
        }
        cout << i << " " << j << endl;
    }
}