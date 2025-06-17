// I like girls they make me feel so good
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        int global_max = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                global_max = max(global_max, a[i][j]);
            }
        }

        vector<pair<int, int>> pos;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] == global_max)
                {
                    pos.emplace_back(i, j);
                }
            }
        }

        bool can_reduce = false;
        for (int r = 0; r < n && !can_reduce; r++)
        {
            unordered_set<int> cols;
            for (auto &p : pos)
            {
                if (p.first != r)
                {
                    cols.insert(p.second);
                    if (cols.size() > 1)
                        break;
                }
            }
            if (cols.size() <= 1)
            {
                can_reduce = true;
            }
        }

        cout << (can_reduce ? global_max - 1 : global_max) << "\n";
    }
}