#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        vector<int> digits;
        for (char c : s) {
            digits.push_back(c - '0');
        }

        sort(digits.begin(), digits.end());

        string result = "";
        int used[10] = {0};

        for (int i = 0; i < 10; ++i) {
            int min_digit_needed = 10 - (i + 1);
            for (int j = 0; j < 10; ++j) {
                if (!used[j] && digits[j] >= min_digit_needed) {
                    result += (digits[j] + '0');
                    used[j] = 1;
                    break;
                }
            }
        }

        cout << result << '\n';
    }
    return 0;
}