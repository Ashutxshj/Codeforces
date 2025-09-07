#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k, x;
        cin >> k >> x;
        
        int result = x;
        for (int i = 0; i < k; i++) {
            result *= 2;
        }
        
        cout << result << endl;
    }
    return 0;
}