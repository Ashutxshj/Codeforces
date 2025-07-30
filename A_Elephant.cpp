#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long ans = 1;
    if (n > 5)
    {
        if (n % 5 == 0)
            ans = n / 5;
        else
            ans = n / 5 + 1;
    }
    cout << ans;
}