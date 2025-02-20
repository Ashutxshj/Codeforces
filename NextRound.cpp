#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, k, count = 0;
    cin >> n >> k;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int n1;
        cin >> n1;
        ans.push_back(n1);
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i] != 0)
        {
            if (ans[i] >= ans[k - 1])
            {
                count++;
            }
        }
    }
    cout << count;
}