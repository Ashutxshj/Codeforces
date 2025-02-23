#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
bool isBeautiful(int a[5][5])
{
    if (a[3][3] == 1)
        return true;
    return false;
}
int main()
{
    int a[5][5];
    int i2, j2;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 1)
            {
                i2 = i + 1;
                j2 = j + 1;
            }
        }
    }
    // for(int i=0;i<5;i++){
    //     cout<<"\n";
    //     for(int j=0;j<5;j++){
    //         cout<<(a[i][j])<<" ";
    //     }
    // }

    // cout<<isBeautiful(a);

    //2,5==>1+2=3
    //3,2==>1


    // double pog = pow((i2 - 3), 2) + pow((j2 - 3), 2);
    // cout << ceil(sqrt(pog));

    cout<<abs(j2-3)+abs(i2-3);
}