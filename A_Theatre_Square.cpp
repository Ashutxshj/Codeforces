#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, m, a;
    cin >> n>>m>>a;
    // number of flagstones=[n/a] * [m/a]
    long long ans =0;
    ans=(long long) ceil((n+a-1) / a) * (long long) ceil((m+a-1) / a);
    cout << ans;
}