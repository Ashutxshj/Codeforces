#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll n, k;
    cin >> n >> k;

    ll odd_count = (n + 1) / 2;

    if (k <= odd_count)
    {

        cout << 2 * k - 1 << endl;
    }
    else
    {
        ll pos_in_even = k - odd_count;
        cout << 2 * pos_in_even << endl;
    }

    return 0;
}