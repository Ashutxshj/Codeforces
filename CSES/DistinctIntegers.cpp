#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long> ans(n);
    set<long long> st;
    for (int i = 0; i < n; i++)
    {
        cin >> ans[i];
    }
    for (long long i : ans)
    {
        st.insert(i);
    }
    cout << st.size();
}