#include <bits/stdc++.h>
using namespace std;
using int64 = long long;
#define ll long long
#define pb push_back
// Secret to rapping immortality that i have got
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int64 s;
        cin >> n >> s;
        int64 count = 0;
        for (int i = 0; i < n; i++)
        {
            int dx,dy;
            int64 x,y;
            cin>>dx>>dy>>x>>y;
            int64 delta=(dx*x-dy*y)%s;
            if(delta<0) delta+=s;
            if(delta==0)
                count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}