#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int yes_count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'Y')
            {
                yes_count++;
            }
        }
        yes_count <= 1 ? cout << "YES" << endl : cout << "NO" << endl;
    }
}