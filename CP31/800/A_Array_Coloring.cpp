#include <bits/stdc++.h>
using namespace std;
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
        int sum = 0;
        for (int i : a)
        {
            sum += i;
        }
        if (n == 2)
        {
            if ((a[0] % 2 == 0 && a[1] % 2 == 0) || (a[0] % 2 == 1 && a[1] % 2 == 1))
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        else
        {
            if (sum % 2 == 0)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
}