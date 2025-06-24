#include <iostream>
#include <vector>
#define vi vector<int>
#define ll long long
#define pb push_back
using namespace std;
bool solve(vi a)
{
    ll sum = 0, count = 0;
    for (int x : a)
    {
        sum += x;
        if (x == 1)
            count++;
    }
    if (sum >= count + a.size() && a.size() > 1)
        return true;
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << (solve(a) ? "YES" : "NO") << endl;
    }
}