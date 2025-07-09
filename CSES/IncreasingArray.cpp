#include <iostream>
#include <vector>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long ans = 0;
    for (long long i = 1; i < n; i++)
    {
        if (a[i - 1] > a[i])
        {
            int diff = abs(a[i - 1] - a[i]);
            ans += diff;
            a[i] += diff;
        }
    }
    cout << ans;
}