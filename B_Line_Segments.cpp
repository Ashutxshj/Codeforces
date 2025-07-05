#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        long long px, py, qx, qy;
        cin >> px >> py >> qx >> qy;
        
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        long long dx = qx - px;
        long long dy = qy - py;
        double target_dist = sqrt((double)(dx * dx + dy * dy));
        
        long long total_sum = 0;
        for (int i = 0; i < n; i++) {
            total_sum += a[i];
        }
        
        long long max_dist = *max_element(a.begin(), a.end());
        
        long long other_sum = total_sum - max_dist;
        
        
        
        double min_achievable = max(0LL, max_dist - other_sum);
        double max_achievable = total_sum;
        
        const double EPS = 1e-9;
        
        if (target_dist >= min_achievable - EPS && target_dist <= max_achievable + EPS) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    
    return 0;
}