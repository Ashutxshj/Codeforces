#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 1)
        cout << n << endl;
    else
    {
        vector<int> ans(n);
        int total_sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ans[i];
            total_sum += ans[i];
        }
        sort(ans.rbegin(), ans.rend());

        int pog = 0;
        for (int i = 0; i < n; i++)
        {
            pog += ans[i];
            if (pog > total_sum - pog)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }
}
// 1 1 1 1 2 10
// 2
// 1