#include <iostream>
#include <string>
#include <unordered_map>
#include <utility>
using namespace std;
std::pair<bool, int> isPalindrome(string s)
{
    // abba
    // abccba
    unordered_map<char, int> mp;
    for (char c : s)
    {
        mp[c]++;
    }
    int t = 0;
    for (auto i : mp)
    {
        if (i.second % 2 != 0)
        {
            t++;
        }
    }
    bool ans = (t <= 1);
    return std::make_pair(ans, t);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        bool ans = false;

        auto result = isPalindrome(s);
        bool canform = result.first;
        int oddCount = result.second;

        if(oddCount<=k+1)
            ans=true;

        cout << (ans ? "YES" : "NO") << endl;
    }
}