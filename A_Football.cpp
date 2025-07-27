#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    string s;
    cin >> s;
    bool ans = false;
    int count_1 = 0, count_2 = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            count_1++;
            count_2 = 0;
        }
        else if 
            (s[i] == '0')
            {
                count_2++;
                count_1 = 0;
            }
        if (count_1 == 7 || count_2 == 7)
            ans = true;
    }
    cout << (ans ? "YES" : "NO");
}