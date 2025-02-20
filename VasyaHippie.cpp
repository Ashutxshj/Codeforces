#include <iostream>
#include <cmath>
using namespace std;

int maxfashiondays(int x, int y)
{
    return min(x, y);
}
int maxdayssocks(int x, int y)
{
    int diff = abs(x - y);
    return diff / 2;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << maxfashiondays(a, b) << " " << maxdayssocks(a, b);
    // Max Days Fashionable + Max Days Socks
}