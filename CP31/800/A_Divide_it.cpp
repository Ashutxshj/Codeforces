#include <bits/stdc++.h>
#define ll long long
using namespace std;
// bool isdiv(ll n,ll a,ll b,ll c)
// {
//     return (n%a==0) && (n%b==0) && (n%c==0);
// }
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll cnt_2 = 0, cnt_3 = 0, cnt_5 = 0;
        while (n % 2 == 0)
        {
            n /= 2;
            cnt_2++;
        }
        while (n % 3 == 0)
        {
            n /= 3;
            cnt_3++;
        }
        while (n % 5 == 0)
        {
            n /= 5;
            cnt_5++;
        }
        if (n != 1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << cnt_2 + cnt_3 * 2 + cnt_5 * 3 << endl;
        }
    }
}