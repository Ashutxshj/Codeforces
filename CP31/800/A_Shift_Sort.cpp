#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int ones = 0;
        for (char c : s) {
            if (c == '1') {
                ones++;
            }
        }
        
        int misplaced_zeros = 0;
        for (int i = n - ones; i < n; i++) {
            if (s[i] == '0') {
                misplaced_zeros++;
            }
        }
        
        cout << misplaced_zeros << endl;
    }
    
    return 0;
}