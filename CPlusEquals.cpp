#include <iostream>
#include <vector>
using namespace std;

void solve(int a, int b, int n, vector<int> &lol)
{
    int count = 0;
    while (max(a, b) <= n)
    {
        if (a < b)
            a += b;
        else
            b += a;
        count++;
    }
    lol.push_back(count);
}

int main()
{
    int t;
    cin >> t;
    vector<int> lol;

    for (int i = 0; i < t; i++)
    {
        int a, b, n;
        cin >> a >> b >> n;
        solve(a, b, n, lol);
    }

    for (int i = 0; i < lol.size(); i++)
    {
        cout << lol[i] << " ";
    }

    return 0;
}
