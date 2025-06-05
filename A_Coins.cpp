#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        
        bool ans = false;
        if (n % 2 == 0)
        {
            ans = true;
        }
        else if (n >= k && (n - k) % 2 == 0)
        {
            ans = true;
        }
        
        cout << (ans ? "YES" : "NO") << endl;
    }
    return 0;
}