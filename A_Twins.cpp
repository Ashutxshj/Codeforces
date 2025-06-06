#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> ans(n);
    int total_sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ans[i];
        total_sum += ans[i];
    }
    sort(ans.begin(), ans.end());
    int pog = 0;
    for (int i = 0; i < n; i++)
    {
        if (pog > total_sum/2)
        {
            cout << n - i + 1 << endl;
            break;
        }
        else
        {
            pog += ans[i];
            total_sum -= ans[i];
        }
    }
}