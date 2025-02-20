#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    //?Middle of these nums
    //?Sum of Diff with each
    int mid = 0, ans = 0;
    if ((a > b && a < c) || (a > c && a < b))
    {
        mid = a;
        ans = abs(mid - b) + abs(mid - c);
    }
    else if ((b > a && b < c) || (b > c && b < a))
    {
        mid = b;
        ans = abs(mid - a) + abs(mid - c);
    }
    else
    {
        mid = c;
        ans = abs(mid - b) + abs(mid - a);
    }
    cout << ans;
}