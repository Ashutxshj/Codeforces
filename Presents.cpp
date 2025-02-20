#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    vector<int> prs(n);
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &prs[i]);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << prs[i] << " ";
    // }
    // 1 2 3 4
    // 2 3 4 1
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[prs[i]] = i+1;
    }
    for (auto c:mp)
    {
        ans.push_back(c.second);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}