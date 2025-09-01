#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(3));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    // Column-Wise Traversal
    vector<int> sum(3);
    for (int j = 0; j < 3; j++)
    {
        int doll = 0;
        for (int i = 0; i < n; i++)
        {
            doll += a[i][j];
        }
        sum[j] = doll;
    }
    bool ans = true;
    for (int i = 0; i < 3; i++)
    {
        if (sum[i] != 0)
            ans = false;
    }
    ans ? cout << "YES" << endl : cout << "NO" << endl;
}