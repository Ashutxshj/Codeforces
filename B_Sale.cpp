#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    long long t, n;
    cin >> t >> n;
    vector<int> lol(t);
    for (int i = 0; i < t; i++)
    {
        cin >> lol[i];
    }
    sort(lol.begin(), lol.end());
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (lol[i] <= 0)
            ans += lol[i];
    }
    cout << abs(ans);
}
