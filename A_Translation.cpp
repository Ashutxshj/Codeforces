#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    string Jerin = "";
    for (int i = a.size() - 1; i >= 0; i--)
    {
        Jerin += a[i];
    }
    Jerin == b ? cout << "YES" : cout << "NO";
}