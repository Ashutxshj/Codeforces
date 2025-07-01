#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define vi vector<int>
//LOL
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        int count[4] = {0};
        
        for (int i = 0; i < n; i++) {
            count[i % 4]++;
        }
        
        int pairs_0_3 = min(count[0], count[3]);
        int pairs_1_2 = min(count[1], count[2]);
        
        int total_rounds = pairs_0_3 + pairs_1_2;
        
        int unpaired = (count[0] - pairs_0_3) + (count[1] - pairs_1_2) + 
                      (count[2] - pairs_1_2) + (count[3] - pairs_0_3);
        
        if (unpaired > 0) {
            cout << "Alice" << endl;
        } else {
            if (total_rounds % 2 == 1) {
                cout << "Alice" << endl;
            } else {
                cout << "Bob" << endl;
            }
        }
    }
    
    return 0;
}