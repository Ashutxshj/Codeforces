#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count_1 = 0, count_0 = 0;
    bool ans = false;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            count_0++;
            count_1 = 0;
        }
        else
        {
            count_1++;
            count_0 = 0;
        }
        if (count_0 == 7 || count_1 == 7)
            ans = true;
    }
    ans == true ? cout << "YES" : cout << "NO";
}