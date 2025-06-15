#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;

        long long ans = 0;

        long long temp1 = k;
        long long count1 = 0;

        if (temp1 >= a)
        {
            long long portions1 = (temp1 - a) / x + 1;
            count1 += portions1;
            temp1 -= portions1 * x;
        }

        if (temp1 >= b)
        {
            long long portions2 = (temp1 - b) / y + 1;
            count1 += portions2;
        }

        ans = max(ans, count1);

        long long temp2 = k;
        long long count2 = 0;

        if (temp2 >= b)
        {
            long long portions2 = (temp2 - b) / y + 1;
            count2 += portions2;
            temp2 -= portions2 * y;
        }

        if (temp2 >= a)
        {
            long long portions1 = (temp2 - a) / x + 1;
            count2 += portions1;
        }

        ans = max(ans, count2);

        cout << ans << endl;
    }
    return 0;
}