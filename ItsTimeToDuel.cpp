#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool solve(vector<int> &a)
{
    int n = a.size();
    bool zero = false;
    if (a[n - 1] = 0)
        zero = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == 0)
            zero = true;
        if (a[i + 1] = a[i] && a[i] == 0)
        {
            return false;
        }
    }
    return zero;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (solve(a))
        {
            cout << "NO" << "\n";
        }
        else
        {
            cout<<"YES"<<"\n";
        }
    }
}