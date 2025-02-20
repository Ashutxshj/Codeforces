#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
bool isGood(vector<int> nums)
{
    // i%2=a[i]%2==>Good
    for (int i = 0; i < nums.size(); i++)
    {
        if (i % 2 != nums[i] % 2)
            return false;
    }
    return true;
}
int solve(vector<int> nums)
{
    int oddM = 0, evenM = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i % 2 != nums[i] % 2)
        {
            if (i % 2 == 0)
                evenM++;
            else
                oddM++;
        }
    }
    if (evenM != oddM)
        return -1;

    return evenM;
}
int main()
{
    int n;
    scanf("%d", &n);
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int size;
        scanf("%d", &size);
        vector<int> lol(size);
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &lol[i]);
        }
        ans.push_back(solve(lol));
    }
    // vector<int> a1 = {0, 5, 2, 1};
    // vector<int> a2 = {2, 4, 6, 7};
    // cout << isGood(a1) << endl;
    // cout << isGood(a2) << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        /* code */
        cout << ans[i] << endl;
    }
}