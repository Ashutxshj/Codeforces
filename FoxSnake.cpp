#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int i = 0; i < m; i++)
            {
                cout << "#";
            }
        }
        else
        {
            if (i % 4 == 1)
            {
                for (int j = 0; j < m - 1; j++)
                {
                    cout << ".";
                }
                cout << "#";
            }
            else
            {
                cout << "#";
                for (int j = 1; j < m; j++)
                {
                    cout << ".";
                }
            }
        }
        cout << "\n";
    }
}

// '''
// 3 3

// ###  (1,1) (1,2) (1,3)
// ..#  (2,1) (2,2) (2,3)
// ###  (3,1) (3,2) (3,3)

// 3 4

// ####  (1,1) (1,2) (1,3) (1,4)
// ...#  (2,1) (2,2) (2,3) (2,4)
// ####  (3,1) (3,2) (3,3) (3,4)

// '''
