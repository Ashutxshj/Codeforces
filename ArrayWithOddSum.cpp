#include <iostream>
#include <vector>
using namespace std;
bool solve(vector<int> nums)
{
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
    }
    if (sum % 2 == 0)
        return false;
    else
        return true;
}
int main()
{
    int n;
    scanf("%d", &n);
    vector<string> ans;
    for (int i = 0; i < n; i++)
    {
        vector<int> lol(n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &lol[i]);
        }
        if (solve(lol))
            ans.push_back("YES");
        else
            ans.push_back("NO");
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
}