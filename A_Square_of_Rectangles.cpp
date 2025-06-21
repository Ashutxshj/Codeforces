#include <bits/stdc++.h>
using int64 = long long;
#define ll long long
#define pb push_back
//Secret to rapping immortality that i have got
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--){
        int l[3], b[3];
        cin >> l[0] >> b[0]
            >> l[1] >> b[1]
            >> l[2] >> b[2];

        long long area = 0;
        for(int i = 0; i < 3; ++i)
            area += 1LL * l[i] * b[i];

        int S = int(floor(sqrt(area) + 0.5));
        if(1LL * S * S != area){
            cout << "NO\n";
            continue;
        }
        bool ok = false;
        for(int p0 = 0; p0 < 3 && !ok; ++p0){
            int p1 = (p0+1)%3, p2 = (p0+2)%3;
            int idx[2] = {p1, p2};

            int l0 = l[p0], b0 = b[p0];
            if(l0 > S || b0 > S) 
                continue;

            int wA = S - l0, hA = S;
            int wB = l0,     hB = S - b0;

            if(wA > 0 && hB > 0){
                for(int t = 0; t < 2; ++t){
                    int x = idx[t], y = idx[1-t];
                    if(l[x] <= wA && b[x] <= hA
                    && l[y] <= wB && b[y] <= hB){
                        ok = true;
                        break;
                    }
                }
            }
            if(!ok && wA > 0){
                int x = idx[0], y = idx[1];
                if(l[x] == wA && l[y] == wA
                && b[x] + b[y] == hA) 
                    ok = true;
                if(!ok && b[x] == hA && b[y] == hA
                && l[x] + l[y] == wA) 
                    ok = true;
            }

            if(!ok && hB > 0){
                int x = idx[0], y = idx[1];
                if(l[x] == wB && l[y] == wB
                && b[x] + b[y] == hB) 
                    ok = true;
                if(!ok && b[x] == hB && b[y] == hB
                && l[x] + l[y] == wB) 
                    ok = true;
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}