#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool ans = false;
        ll n, a, b;
        cin >> n >> a >> b;
        ll x = n - a + 1;
        ll y = n - b + 1;
        for (ll i = 0; i < x + 1; i++)
        {
            for (ll j = 0; j < y + 1; j++)
            {
                if (i + j == n)
                    ans = true;
            }
        }
        ans?cout<<"Yes"<<endl:cout<<"No"<<endl;
    }
}