#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int curr = INT_MAX;
    bool hasZero = false;
    for (int i : a)
    {
        if (i == 0)
            hasZero = true;
        else
        {
            int k = abs(i);
            if (k < curr)
                curr = k;
        }
    }
    hasZero ? cout << 0 << endl : cout << curr << endl;
}