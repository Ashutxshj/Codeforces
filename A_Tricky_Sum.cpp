#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        if (n == 1)
        {
            cout << -1 << endl;
            continue;
        }

        long long total_sum = n * (n + 1) / 2;

        long long power_of_2_sum = 0;
        for (long long power = 1; power <= n; power *= 2)
        {
            power_of_2_sum += power;
        }

        long long ans = total_sum - 2 * power_of_2_sum;
        cout << ans << endl;
    }
    return 0;
}