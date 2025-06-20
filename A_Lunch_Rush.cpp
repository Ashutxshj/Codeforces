#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    long long maxJoy = LLONG_MIN;
    
    for (int i = 0; i < n; i++) {
        int f, t;
        cin >> f >> t;
        
        long long currentJoy;
        if (t > k) {
            currentJoy = f - (t - k);
        } else {
            currentJoy = f;
        }
        
        maxJoy = max(maxJoy, currentJoy);
    }
    
    cout << maxJoy << endl;
    return 0;
}