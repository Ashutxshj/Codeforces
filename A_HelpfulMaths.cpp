#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count_1 = 0, count_2 = 0, count_3 = 0;
    for (char c : s)
    {
        if (c == '1')
            count_1++;
        if (c == '2')
            count_2++;
        if (c == '3')
            count_3++;
    }
    string lol ="";
    for (int i = 0; i < count_1; i++)
    {
        lol += "1+";
    }
    for (int i = 0; i < count_2; i++)
    {
        lol += "2+";
    }
    for (int i = 0; i < count_3; i++)
    {
        lol += "3+";
    }
    if(!lol.empty())
        lol.pop_back();
    cout << lol;
}