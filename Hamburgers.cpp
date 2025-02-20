#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
string sw;
ll pb, ps, pcc, nb, ns, nc, money;
ll cb, cs, cc;
bool ok(ll need) {
    ll needb = max(need*cb-nb,0LL), needs = max(0LL,need*cs-ns), needc = max(0LL,need*cc-nc);
    ll total = needb*pb + needs*ps + needc*pcc;
    return total <= money;
}
int main()
{
    cin>>sw>>nb>>ns>>nc>>pb>>ps>>pcc>>money;
    
    for(auto c : sw) {
        if(c == 'B') cb++;
        else if(c == 'S') cs++;
        else cc++;
    }
    
    ll l = 0, r = 1e15;
    while((r-l)>1) {
        ll m = l+(r-l)/2;
        if(ok(m))
            l = m;
        else
            r = m-1;
    }
    if(ok(r))
        cout<<r;
    else
        cout<<l;
    return 0;
}