#include <iostream>
using namespace std;
bool isEven(int a)
{
    if (a % 2 == 0)
        return true;
    return false;
}
int main()
{
    int n;
    cin >> n;
    bool ans = false;
    for (int i = 1; i < n; i++)
    {
        int target = n - i;
        if (isEven(i) && isEven(target))
            ans = true;
    }
    cout << (ans ? "YES" : "NO") << endl;
}