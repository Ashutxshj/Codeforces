#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
#define ll long long
#define pb push_back
// I want to break free
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int a, x, y;
        cin >> a >> x >> y;

        if (x > y)
            swap(x, y);

        int alice_to_x = abs(a - x);
        int alice_to_y = abs(a - y);

        bool can_win = false;

        for (int b = 1; b <= 100; b++)
        {
            if (b == a)
                continue;

            int bob_to_x = abs(b - x);
            int bob_to_y = abs(b - y);

            if (bob_to_x < alice_to_x && bob_to_y < alice_to_y)
            {
                can_win = true;
                break;
            }
        }

        cout << (can_win ? "YES" : "NO") << "\n";
    }

    return 0;
}