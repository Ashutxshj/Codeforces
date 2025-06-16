#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
#define ll long long

// dp[pos][nonzero_count][tight][started]
ll dp[20][4][2][2];
string num;

ll solve(int pos, int nonzero_count, int tight, int started) {
    // Base case: processed all digits
    if (pos == num.length()) {
        return 1; // Valid number found
    }
    
    // Memoization
    if (dp[pos][nonzero_count][tight][started] != -1) {
        return dp[pos][nonzero_count][tight][started];
    }
    
    ll result = 0;
    int limit = tight ? (num[pos] - '0') : 9;
    
    for (int digit = 0; digit <= limit; digit++) {
        int new_nonzero_count = nonzero_count;
        int new_tight = tight && (digit == limit);
        int new_started = started || (digit > 0);
        
        // If we place a non-zero digit and number has started, increment count
        if (digit > 0 && new_started) {
            new_nonzero_count++;
        }
        
        // Pruning: if non-zero count exceeds 3, skip
        if (new_nonzero_count > 3) {
            continue;
        }
        
        result += solve(pos + 1, new_nonzero_count, new_tight, new_started);
    }
    
    return dp[pos][nonzero_count][tight][started] = result;
}

ll countClassy(ll n) {
    if (n < 0) return 0;
    
    num = to_string(n);
    memset(dp, -1, sizeof(dp));
    return solve(0, 0, 1, 0);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        ll l, r;
        cin >> l >> r;
        
        // Count classy numbers in [0, r] - [0, l-1]
        ll ans = countClassy(r) - countClassy(l - 1);
        cout << ans << endl;
    }
    
    return 0;
}