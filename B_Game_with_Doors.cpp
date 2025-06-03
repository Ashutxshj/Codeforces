#include <iostream>
#include <vector>
using namespace std;
int solve(int l1, int r1, int l2, int r2)
{
    if (r1 < l2 || r2 < l1)
    {
        return 1;
    }
    vector<int> rooms(101, 0);
    for (int i = l1; i <= r1; i++)
    {
        rooms[i]++;
    }
    for (int i = l2; i <= r2; i++)
    {
        rooms[i]++;
    }
    int ans = 0;
    for (int i = 1; i <= 100; i++)
    {
        if(rooms[i]==2 && rooms[i-1]>0)
            ans++; // 1 2 // 2 2
        if(rooms[i]==1 && rooms[i-1]==2)
            ans++; // 2 1
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        int l1, r1;
        cin >> l1 >> r1;
        int l2, r2;
        cin >> l2 >> r2;
        ans[i] = solve(l1, r1, l2, r2);
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << "\n";
    }
}