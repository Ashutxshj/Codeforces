#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<bool> b;
int n;
vector<int> primes;

void sieve() {
    b.assign(n + 1, true);
    b[0] = b[1] = false;
    
    for (int i = 2; i * i <= n; i++) {
        if (b[i]) {
            for (int j = i + i; j <= n; j += i) {
                b[j] = false;
            }
        }
    }
    
    for (int i = 2; i < n; i++) {
        if (b[i]) {
            primes.push_back(i);
        }
    }
}

int main() {
    cin >> n;
    b.resize(n + 1);
    sieve();
    
    int count1 = 0, count2 = 0;
    bool flag = true;
    
    for (int i = 6; i <= n; i++) {
        for (int v : primes) {
            if (v > i) break;
            if (i % v == 0)
                count1++;
            if (count1 > 2) {
                flag = false;
                break;
            }
        }
        
        if (flag && count1 == 2)
            count2++;
        count1 = 0;
        flag = true;
    }
    
    cout << count2 << endl;
    
    return 0;
}