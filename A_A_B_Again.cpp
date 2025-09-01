#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int b = a / 10;
        int c = a % 10;
        cout << c + b << endl;
    }
}