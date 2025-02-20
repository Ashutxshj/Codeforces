#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int i, j, k;
    int n;

    scanf("%d", &n);
    vector<int> a(n);
    int count=1,maxCount=1;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
            count++;
        else
        {
            if (count > maxCount)
                maxCount = count;

            count = 1;
        }
    }
    if (count > maxCount)
        maxCount = count;

    cout << maxCount;
}
