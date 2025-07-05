#include <bits/stdc++.h>
#define pb push_back
#define vi vector<int>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        long long a, b, x, y;
        cin >> a >> b >> x >> y;

        if (a == b)
        {
            cout << 0 << "\n";
            continue;
        }
        vector<long long> dist(101, LLONG_MAX);
        queue<int> q;

        dist[a] = 0;
        q.push(a);

        while (!q.empty())
        {
            int curr = q.front();
            q.pop();

            if (curr + 1 <= 100)
            {
                if (dist[curr + 1] > dist[curr] + x)
                {
                    dist[curr + 1] = dist[curr] + x;
                    q.push(curr + 1);
                }
            }

            int next = curr ^ 1;
            if (next >= 1 && next <= 100)
            {
                if (dist[next] > dist[curr] + y)
                {
                    dist[next] = dist[curr] + y;
                    q.push(next);
                }
            }
        }

        if (dist[b] == LLONG_MAX)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << dist[b] << "\n";
        }
    }

    return 0;
}