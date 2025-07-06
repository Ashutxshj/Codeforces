#include <iostream>
#include <string>
#include <vector>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    for (ll c = 0; c < t; c++)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        vector<ll> v;
        for (string st : {"mapie", "pie", "map"})
        {
            for (ll p = 0; (p = s.find(st, p)) != string::npos;)
            {
                s[p + st.length() / 2] = '?';
                v.push_back(p + st.length() / 2);
            }
        }
        cout << v.size() << endl;
    }
    return 0;
}
