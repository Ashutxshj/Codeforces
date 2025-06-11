#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        long long s;
        cin >> s;
        
        long long total_spent = 0;
        
        while (s >= 10) {
            
            total_spent += 10;
            s = s - 10 + 1;
        }
        
        total_spent += s;
        
        cout << total_spent << "\n";
    }
    
    return 0;
}