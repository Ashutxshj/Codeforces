#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, q;
        cin >> n >> m >> q;
        int m1, m2;
        cin >> m1 >> m2;
        if (m1 > m2)
        {
            swap(m1, m2);
        }
        int d;
        cin >> d;
        while (q--)
        {
            if (d < m1)
                cout << m1 - 1 << endl;
            if (d > m2)
                cout << n - m2 << endl;
            if (d >= m1 && d <= m2)
            {
                int mid = (m1 + m2) / 2;
                cout << min(mid - m1, m2 - mid) << endl;
            }
        }
    }
    // Case 1 D T1 T2 --> D goes to 1 so (T1-1)

    // Case 2 T1 D T2 --> D goes to mid of T1,T2
    // Case 3 T1 T2 D --> D goes to end so (N-T2)
}
// 97290
// 47 2 1
//  1 2
//  3
//? 1
//? 45

//* Expected 2 got 1 -->Sort the teachers
