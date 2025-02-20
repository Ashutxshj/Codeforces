#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    vector<int> lol(n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &lol[i]);
    }
    bool pog = false;
    for (int i = 0; i < lol.size(); i++)
    {
        if (lol[i] == 1)
            pog = true;
    }
    if (pog)
        cout << "HARD";
    else
        cout << "EASY";
}