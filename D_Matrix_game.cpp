#include <bits/stdc++.h>
using namespace std;
static const int MOD = 1000000007;
using int64 = long long;
#define ll long long
#define pb push_back
//Secret to rapping immortality that i have got
int64 modexp(int64 base, int64 exp = MOD - 2)
{
    int64 res = 1;
    base % MOD;
    while (exp > 0)
    {
        if (exp & 1)
            res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp >>= 1;
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    vector<tuple<int, int, int>> qs(t);
    int maxA = 0;
    for (int i = 0; i < t; i++)
    {
        int a, b, k;
        cin >> a >> b >> k;
        qs[i] = {a, b, k};
        maxA = max(maxA, a);
    }
    vector<int64> fact(maxA + 1, 1), invfact(maxA + 1, 1);
    for (int i = 1; i <= maxA; i++)
    {
        fact[i] = fact[i - 1] * i % MOD;
    }
    invfact[maxA] = modexp(fact[maxA]);
    for (int i = maxA; i > 0; i--)
    {
        invfact[i - 1] = invfact[i] * i % MOD;
    }
    for (auto &q : qs)
    {
        int a, b, k;
        tie(a, b, k) = q;

        int64 km = (int64)k * (a - 1) % MOD;
        int64 n_mod = (km + 1) % MOD;

        int64 num = 1;
        for (int i = 0; i < a; i++)
        {
            int64 term = n_mod - i;
            if (term < 0)
                term += MOD;
            num = num * term % MOD;
        }
        int64 comb = num * invfact[a] % MOD;

        int64 bm = (int64)(b - 1) * k % MOD;
        int64 m_mod = (bm * comb + 1) % MOD;

        cout << n_mod << " " << m_mod << "\n";
    }
    return 0;
}