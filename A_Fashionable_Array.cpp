// Competitive Template | By: Ashutosh Jha
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <cassert>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

const int INF = 1e9 + 5;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

// Macros
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define fi first
#define se second

// Fast IO (no sync with C stdio, untie cin/cout)
void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        if (n == 1) {
            // Single element array: min + max = 2 * element
            // This is always even, so no operations needed
            cout << 0 << "\n";
            continue;
        }
        
        int max_keep = 0;
        
        // Try all possible pairs as min and max
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int min_val = a[i];
                int max_val = a[j];
                
                // Ensure min_val <= max_val
                if (min_val > max_val) {
                    swap(min_val, max_val);
                }
                
                // Check if this pair makes a fashionable array
                if ((min_val + max_val) % 2 == 0) {
                    // Count elements we can keep (between min_val and max_val inclusive)
                    int keep_count = 0;
                    for (int k = 0; k < n; k++) {
                        if (a[k] >= min_val && a[k] <= max_val) {
                            keep_count++;
                        }
                    }
                    max_keep = max(max_keep, keep_count);
                }
            }
        }
        
        // Minimum operations = total elements - maximum we can keep
        cout << n - max_keep << "\n";
    }
    
    return 0;
}
