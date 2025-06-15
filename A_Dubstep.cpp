#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string ans = "";
    
    
    for (int i = 0; i < s.length(); )
    {
        
        if (i + 2 < s.length() && s.substr(i, 3) == "WUB")
        {
        
            if (!ans.empty() && ans.back() != ' ')
                ans += " ";
            i += 3;
        }
        else
        {
            ans += s[i];
            i++;
        }
    }
    
    while (!ans.empty() && ans.back() == ' ')
        ans.pop_back();
    
    cout << ans;
    return 0;
}