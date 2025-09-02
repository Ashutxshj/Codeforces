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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        unordered_map<int, int> mp;
        for (int i : arr)
        {
            mp[i]++;
        }

        bool valid = true;

        if (mp.size() == 1)
            valid = true;
        else if (mp.size() > 2)
        {
            valid = false;
        }
        else if (n % 2 == 0)
        {
            for (auto i : mp)
            {
                if (i.second != n / 2)
                {
                    valid = false;
                    break;
                }
            }
        }
        else
        {
            for (auto i : mp)
            {
                if (i.second != (n / 2) && i.second != ((n / 2) + 1))
                {
                    valid = false;
                    break;
                }
            }
        }

        if (valid)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}