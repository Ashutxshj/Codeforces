#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        int maxVal = 0;

        // Track where the max values are
        vector<pair<int, int>> maxPositions;

        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j) {
                cin >> a[i][j];
                if (a[i][j] > maxVal) {
                    maxVal = a[i][j];
                    maxPositions.clear();
                    maxPositions.emplace_back(i, j);
                } else if (a[i][j] == maxVal) {
                    maxPositions.emplace_back(i, j);
                }
            }

        int result = 1e9;

        // Try every (r, c) from maxPositions only
        for (auto [r, c] : maxPositions) {
            int curMax = 0;
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < m; ++j) {
                    int val = a[i][j];
                    if (i == r || j == c) val--;
                    if (i == r && j == c) val--;
                    curMax = max(curMax, val);
                }
            }
            result = min(result, curMax);
        }

        cout << result << '\n';
    }

    return 0;
}
