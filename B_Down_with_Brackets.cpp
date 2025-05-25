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
        
        
        bool canMakeUnbalanced = false;
        

        int balance = 0;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == '(') {
                balance++;
            } else {
                balance--;
            }
            
            if (balance == 0) {
                canMakeUnbalanced = true;
                break;
            }
        }
        
        cout << (canMakeUnbalanced ? "YES" : "NO") << "\n";
    }
    
    return 0;
}