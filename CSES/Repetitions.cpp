#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int ans = 1, count = 1;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
            count += 1;
        else
            count = 1;
        ans = max(ans, count);
    }
    cout << ans;
}