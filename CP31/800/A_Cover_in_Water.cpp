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
        string s;
        cin >> s;
        int cnt = 0;
        vector<int> gaps;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
                cnt++;
            else
            {
                gaps.push_back(cnt);
                cnt = 0;
            }
        }
        gaps.push_back(cnt);
        int ans = 0;
        bool gap_bigger_than_2 = false;
        for (int i = 0; i < gaps.size(); i++)
        {
            if (gaps[i] > 2)
            {
                gap_bigger_than_2 = true;
            }
            else
            {
                ans += gaps[i];
            }
        }
        gap_bigger_than_2 ? cout << 2 << endl : cout << ans << endl;
    }
}