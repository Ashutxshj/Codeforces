#include <iostream>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        bool ans = false;
        if (n % 2 != 0)
            ans = true;
        while (n > 1)
        {
            if (n % 2 != 0)
                ans = true;

            n = n / 2;
        }
        ans == true ? cout << "YES" << "\n" : cout << "NO" << "\n";
    }
}