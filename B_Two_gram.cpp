#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<string, int> mp;
    for (int i = 0; i < s.length() - 1; i++)
    {
        string sub = s.substr(i, 2);
        //reverse(sub.begin(), sub.end());
        mp[sub]++;
    }
    int a = 0;
    string result;
    for (auto i : mp)
    {
        if(i.second>a){
            a=i.second;
            result=i.first;
        }
    }
    cout << result << endl;
}