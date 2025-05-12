#include <iostream>
using namespace std;
int main()
{
    int k, n, w;
    scanf("%d%d%d", &k, &n, &w);

    long long lol = (w * (w + 1) / 2) * k;
    long long borrow = lol - n;
    if (borrow <= 0)
        cout << 0;
    else
        cout << borrow;
}