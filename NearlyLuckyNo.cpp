#include <iostream>
#include <string>
using namespace std;
bool islucky(int n)
{
    string s = to_string(n);
    for (char c : s)
    {
        int lol = c - '0';
        if (lol != 4 && lol != 7)
            return false;
    }
    return true;
}
int main()
{
    long long n;
    cin >> n;
    // cout << islucky(n);
    string s1 = to_string(n);
    int count = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        int lol = s1[i] - '0';
        if (islucky(lol))
            count++;
    }
    if (islucky(count))
        cout << "YES";
    else
        cout << "NO";
}