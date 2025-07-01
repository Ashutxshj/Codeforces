#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, j, k;
        cin >> n >> j >> k;
        
        vector<int> power(n);
        for (int i = 0; i < n; i++) {
            cin >> power[i];
        }
        
        // Check if we need only one winner
        bool single_winner = (k == 1);
        
        if (single_winner) {
            // Find the maximum power level
            int best_power = power[0];
            for (int i = 1; i < n; i++) {
                if (power[i] > best_power) {
                    best_power = power[i];
                }
            }
            
            // Player j wins only if they have max power
            bool can_win = (power[j-1] == best_power);
            cout << (can_win ? "YES" : "NO") << "\n";
        } else {
            // Multiple survivors allowed - always possible through strategic play
            cout << "YES\n";
        }
    }
    
    return 0;
}