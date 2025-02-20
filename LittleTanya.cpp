#include <iostream>
using namespace std;
int main()
{
    int n, k, count = 0;
    cin >> n >> k;
    while (count < k)
    {
        if (n % 10 != 0)
        {
            n = n - 1;
        }
        else
        {
            n = n / 10;
        }
        count++;
    }
    cout << n;
}