#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, f, a, b;
        cin >> n >> f >> a >> b;
        vector<long long> m(n);
        for (int i = 0; i < n; i++)
        {
            cin >> m[i];
        }
        long long prev_time=0;
        for (long long i = 0; i < n; i++)
        {
            f -= min((a * (m[i] - prev_time)), b);
            prev_time=m[i];
        }
        cout << (f > 0 ? "YES" : "NO") << endl;
    }
}