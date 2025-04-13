#include <iostream>
#include <vector>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    vector<long long> lol(n);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> lol[i];
    }
    long long sum = n * (n + 1) / 2;
    long long sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        sum2 += lol[i];
    }
    cout << sum - sum2;
}