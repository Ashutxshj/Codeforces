#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        bool found = false;

        for (int i = 1; i < n - 1; ++i) {
            char b = s[i];

            bool in_prefix = s.substr(0, i).find(b) != string::npos;
            bool in_suffix = s.substr(i + 1).find(b) != string::npos;

            if (in_prefix || in_suffix) {
                found = true;
                break;
            }
        }

        cout << (found ? "Yes\n" : "No\n");
    }

    return 0;
}
