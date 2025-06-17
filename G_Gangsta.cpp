#include <bits/stdc++.h>
// I love little girls
using namespace std;
using int64 = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int64> D(n + 1);
        for (int i = 1; i <= n; ++i)
        {
            D[i] = D[i - 1] + (s[i - 1] == '0' ? 1 : -1);
        }

        sort(D.begin(), D.end());

        int64 pref = 0, absSum = 0;
        for (int i = 0; i <= n; ++i)
        {
            absSum += D[i] * i - pref;
            pref += D[i];
        }

        int64 lenSum = 1LL * n * (n + 1) * (n + 2) / 6;

        cout << (lenSum + absSum) / 2 << '\n';
    }

    return 0;
}
