#include <bits/stdc++.h>
using namespace std;
// bool isPalindrome(string a)
// {
//     string b = a;
//     reverse(b.begin(), b.end());
//     return b == a;
// }
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string a;
        cin >> a;
        map<char, int> mp;
        for (char c : a)
        {
            mp[c]++;
        }
        int oddFreq = 0;
        for (auto p : mp)
        {
            if (p.second % 2 == 1)
                oddFreq++;
        }
        int remaining = n - k;
        cout << (oddFreq - k <= remaining % 2 ? "YES" : "NO") << endl;
    }
}