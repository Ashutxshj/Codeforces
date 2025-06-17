#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        // All elements 1..2n appear exactly once.
        vector<int> combined(2 * n);
        for (int i = 0; i < n; i++) combined[i] = a[i];
        for (int i = 0; i < n; i++) combined[n + i] = b[i];

        vector<int> sorted_combined = combined;
        sort(sorted_combined.begin(), sorted_combined.end());

        // Target arrays:
        vector<int> target_a(sorted_combined.begin(), sorted_combined.begin() + n);
        vector<int> target_b(sorted_combined.begin() + n, sorted_combined.end());

        vector<pair<int, int>> ops;

        // Helper lambdas to perform operations and record them.
        auto op1 = [&](int i) {
            ops.emplace_back(1, i + 1);
            swap(a[i], a[i + 1]);
        };
        auto op2 = [&](int i) {
            ops.emplace_back(2, i + 1);
            swap(b[i], b[i + 1]);
        };
        auto op3 = [&](int i) {
            ops.emplace_back(3, i + 1);
            swap(a[i], b[i]);
        };

        // Function to find position of x in array arr
        auto find_pos = [](const vector<int> &arr, int x) {
            for (int i = 0; i < (int)arr.size(); i++)
                if (arr[i] == x) return i;
            return -1;
        };

        // For each position i, fix a[i] to target_a[i]
        for (int i = 0; i < n; i++) {
            int x = target_a[i];

            // Check if x is in a or b
            int pos_in_a = find_pos(a, x);
            int pos_in_b = find_pos(b, x);

            if (pos_in_a != -1) {
                // Bubble x up to position i in a
                while (pos_in_a > i) {
                    op1(pos_in_a - 1);
                    pos_in_a--;
                }
            } else {
                // x is in b, swap across to a[i] first
                // Bubble x up in b to position i first
                while (pos_in_b > i) {
                    op2(pos_in_b - 1);
                    pos_in_b--;
                }
                // Swap across arrays at position i
                op3(i);
                // Now x is at a[i]
            }
        }

        // For each position i, fix b[i] to target_b[i]
        for (int i = 0; i < n; i++) {
            int x = target_b[i];

            int pos_in_a = find_pos(a, x);
            int pos_in_b = find_pos(b, x);

            if (pos_in_b != -1) {
                // Bubble x up to position i in b
                while (pos_in_b > i) {
                    op2(pos_in_b - 1);
                    pos_in_b--;
                }
            } else {
                // x in a, bubble it up to i and swap across
                while (pos_in_a > i) {
                    op1(pos_in_a - 1);
                    pos_in_a--;
                }
                // swap across arrays at i
                op3(i);
            }
        }

        // Now a and b are sorted strictly increasing and a[i]<b[i].

        cout << (int)ops.size() << "\n";
        for (auto &p : ops) {
            cout << p.first << " " << p.second << "\n";
        }
    }
    return 0;
}
