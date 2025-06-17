#include <bits/stdc++.h>
//I love little girls
using namespace std;
const int INF = 1e9;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;                     
    cin >> T;
    while (T--) {
        string L, R;           
        cin >> L >> R;
        int d = (int)L.size();
        
        int dp[2][2][2];
        for (int lo = 0; lo < 2; ++lo)
            for (int hi = 0; hi < 2; ++hi)
                dp[0][lo][hi] = INF;
        dp[0][0][0] = 0;       
        for (int pos = 0; pos < d; ++pos) {
            for (int lo = 0; lo < 2; ++lo)
                for (int hi = 0; hi < 2; ++hi)
                    dp[1][lo][hi] = INF;       

            for (int lo = 0; lo < 2; ++lo) {
                for (int hi = 0; hi < 2; ++hi) if (dp[0][lo][hi] < INF) {
                    int lowDigit  = lo ? 0           : L[pos] - '0';
                    int highDigit = hi ? 9           : R[pos] - '0';

                    for (int dig = lowDigit; dig <= highDigit; ++dig) {
                        int nlo = lo | (dig > lowDigit);
                        int nhi = hi | (dig < highDigit);

                        int add = (dig == (L[pos] - '0')) +
                                  (dig == (R[pos] - '0'));
                        dp[1][nlo][nhi] = min(dp[1][nlo][nhi],
                                              dp[0][lo][hi] + add);
                    }
                }
            }
            for (int lo = 0; lo < 2; ++lo)
                for (int hi = 0; hi < 2; ++hi)
                    dp[0][lo][hi] = dp[1][lo][hi];
        }
        int ans = INF;
        for (int lo = 0; lo < 2; ++lo)
            for (int hi = 0; hi < 2; ++hi)
                ans = min(ans, dp[0][lo][hi]);

        cout << ans << '\n';
    }
    return 0;
}