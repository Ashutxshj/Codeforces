#include <iostream>
using namespace std;

bool canRepresent(int n) {
    if (n < 2020) return false;
    
    for (int count_2020 = 0; count_2020 * 2020 <= n; count_2020++) {
        int remaining = n - count_2020 * 2020;
        
        if (remaining % 2021 == 0) {
            return true;
        }
    }
    
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << (canRepresent(n) ? "YES" : "NO") << endl;
    }
    return 0;
}