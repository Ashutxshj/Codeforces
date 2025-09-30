#include <bits/stdc++.h>
using namespace std;
#define int long long
set<pair<int, int>> pog(int x, int y, int a, int b)
{
    set<pair<int, int>> st;
    vector<pair<int, int>> moves = {{a, b}, {a, -b}, {-a, b}, {-a, -b}, {b, a}, {b, -a}, {-b, a}, {-b, -a}};
    for (auto [dx, dy] : moves)
    {
        st.insert({x + dx, y + dy});
    }
    return st;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int xk, yk;
        cin >> xk >> yk;
        int xq, yq;
        cin >> xq >> yq;
        
        set<pair<int, int>> king_st = pog(xk, yk, a, b);
        set<pair<int, int>> queen_st = pog(xq, yq, a, b);
        
        int count = 0;
        for (auto pos : king_st)
        {
            if (queen_st.count(pos))
                count++;
        }
        cout << count << "\n";
    }
    return 0;
}