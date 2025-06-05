#include <iostream>
#include <vector>
#include <unordered_map>
//   ai=aj, bi=1,bj=2
//   ai=aj, bi=1,bj=3
//   ai=aj, bi=2,bj=3
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]].push_back(i);
        }
        vector<int> dupes;
        for (auto &p : mp)
        {
            if (p.second.size() >= 2)
                dupes.push_back(p.first);
        }
        if (dupes.size() < 2)
        {
            cout << -1 << "\n";
            continue;
        }
        vector<int> ans(n, 1);
        int val1 = dupes[0];
        ans[mp[val1][0]] = 1;
        ans[mp[val1][1]] = 2;

        int val2 = dupes[1];
        ans[mp[val2][0]] = 1;
        ans[mp[val2][1]] = 3;

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
}