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
        int x = 1;
        for (int i = 2; i < n + 1; i++)
        {
            if (n % i == 0)
            {
                x = i;
            }
            else
            {
                break;
            }
        }
        cout << x << endl;
    }
    return 0;
}