#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int n;
    cin >> n;
    bool ans = true;
    int sum_of_n = n * (n + 1) / 2;
    if ((sum_of_n & 1) == 0)
    {
        ans = true;
    }
    else
    {
        ans = false;
    }
    vector<int> ans1, ans2;
    ans1.push_back(n);
    bool counter = true;
    for (int i = n - 1; i >= 1; i = i - 2)
    {
        if (counter)
        {
            ans2.push_back(i);
            ans2.push_back(i - 1);
            counter = false;
        }
        else
        {
            ans1.push_back(i);
            ans1.push_back(i - 1);
            counter = true;
        }
    }
    ans1.erase(remove(ans1.begin(), ans1.end(), 0), ans1.end());
    ans2.erase(remove(ans2.begin(), ans2.end(), 0), ans2.end());
    if (ans)
    {
        cout << "YES" << endl;
        cout << ans2.size() << endl;
        for (int i : ans2)
        {
            cout << i << " ";
        }
        cout << endl;
        cout << ans1.size() << endl;
        for (int i : ans1)
        {
            cout << i << " ";
        }
    }
    else
    {
        cout << "NO" << endl;
    }
}