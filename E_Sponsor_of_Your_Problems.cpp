#include <iostream>
#include <string>
using namespace std;

int f(int a, int b) {
    string s1 = to_string(a), s2 = to_string(b);
    int len = max(s1.size(), s2.size());
    while (s1.size() < len) s1 = '0' + s1;
    while (s2.size() < len) s2 = '0' + s2;
    int res = 0;
    for (int i = 0; i < len; ++i) {
        if (s1[i] == s2[i]) res++;
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        int ans = 18; // max possible is 9+9
        for (int x = l; x <= r && x <= l + 100; ++x) {
            ans = min(ans, f(l, x) + f(x, r));
        }
        cout << ans << '\n';
    }
    return 0;
}
