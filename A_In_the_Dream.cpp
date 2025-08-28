#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, a1, b1;
        cin >> a >> b >> a1 >> b1;
        int c=a1-a;
        int d=b1-b;
        bool ans1 = true, ans2 = true;
        int ac = 2 * a + 2;
        int bc = 2 * b + 2;
        int cc = 2 * c + 2;
        int dc = 2 * d + 2;
        if (b > ac)
            ans1 = false;
        if (a > bc)
            ans1 = false;
        if (c > dc)
            ans2 = false;
        if (d > cc)
            ans2 = false;
        ans1 &&ans2 ? cout << "YES" << endl : cout << "NO" << endl;
    }
}