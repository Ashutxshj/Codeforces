#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, s;
        cin >> n >> s;
        
        vector<int> x(n);
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }
        
        int left_most = x[0];
        int right_most = x[n-1];
        
        if (s >= left_most && s <= right_most) {
            int option1 = (s - left_most) + (right_most - left_most);
            int option2 = (right_most - s) + (right_most - left_most);
            
            cout << min(option1, option2) << "\n";
        }
        else if (s < left_most) {
            
            cout << right_most - s << "\n";
        }
        else {
            
            cout << s - left_most << "\n";
        }
    }
    
    return 0;
}