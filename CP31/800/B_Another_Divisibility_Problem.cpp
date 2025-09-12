#include <bits/stdc++.h>
using namespace std;
#define int long long
int pog(int a, int b)
{
    string s1 = to_string(a);
    string s2 = to_string(b);
    string s3 = s1 + s2;
    return stoll(s3);
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int ans = 0LL;
        for (int i = 1; i < x * 10LL; i++)
        {
            int a = pog(x, i);
            int b = x + i;
            if (a % b == 0)
            {
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }
}