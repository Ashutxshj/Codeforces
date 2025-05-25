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
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        int n = s.length();
        
        // The key insight: we cannot break the sequence if and only if
        // the sequence is of the form (^k )^k for some k >= 1
        // i.e., k opening brackets followed by k closing brackets
        
        bool can_break = false;
        
        // Check if string is of form (((()))
        int open_count = 0;
        bool all_opens_first = true;
        
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                open_count++;
            } else {
                all_opens_first = false;
                break;
            }
        }
        
        // If we found all opens first, check if rest are all closes
        if (all_opens_first && open_count == n/2) {
            // Check if remaining are all closes
            bool all_closes_after = true;
            for (int i = open_count; i < n; i++) {
                if (s[i] != ')') {
                    all_closes_after = false;
                    break;
                }
            }
            
            if (all_closes_after) {
                can_break = false; // Cannot break this form
            } else {
                can_break = true;
            }
        } else {
            can_break = true; // Can break if not purely nested
        }
        
        cout << (can_break ? "YES" : "NO") << "\n";
    }
    
    return 0;
}