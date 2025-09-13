#include <bits/stdc++.h>
using namespace std;
#define int long long
const int maxn = 2e5 + 10;
int t, n, a[maxn], dp[maxn];
deque<int> q[maxn];
int32_t main()
{
    for (scanf("%d", &t); t--;)
    {
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
            q[i].clear();
        for (int i = 1; i <= n; i++)
            scanf("%d", &a[i]);
        for (int i = 1; i <= n; i++)
        {
            dp[i] = dp[i - 1], q[a[i]].emplace_back(i);
            if (q[a[i]].size() > a[i])
                q[a[i]].pop_front();
            if (q[a[i]].size() == a[i])
                dp[i] = max(dp[i], dp[q[a[i]].front() - 1] + a[i]);
        }
        printf("%d\n", dp[n]);
    }
}