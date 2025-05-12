#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int lol = 0;
    int max_capacity = 0;
    for (int i = 0; i < n; i++)
    {
        int a = 0;
        int b = 0;
        cin >> a >> b;
        lol = lol - a + b;
        max_capacity = max(max_capacity, lol);
    }
    cout << max_capacity << endl;
}