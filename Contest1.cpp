#include <iostream>
#include <vector>
using namespace std;

string solve_soccer(long long int x1, long long int y1, long long int x2, long long int y2) {
    if (x1 == y1 || x2 == y2) {
        return "YES";
    }

    if ((x1 < x2 && y1 < y2)) {
        return "NO";
    }

    return "YES";
}

int main() {
    long long int t;
    cin >> t;

    vector<long long int> x1(t), y1(t), x2(t), y2(t);

    for (int i = 0; i < t; ++i) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
    }

    for (int i = 0; i < t; ++i) {
        cout << solve_soccer(x1[i], y1[i], x2[i], y2[i]) << endl;
    }

    return 0;
}
