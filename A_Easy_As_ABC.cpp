#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
bool isAdjacent(int r1, int c1, int r2, int c2)
{
    return (abs(r1 - r2) <= 1 && abs(c1 - c2) <= 1 && !(r1 == r2 && c1 == c2));
}
int main()
{
    vector<string> grid(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> grid[i];
    }
    vector<string> words;
    // for (int i = 0; i < 3; i++)
    // {

    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << grid[i][j];
    //     }
    //     cout<<"\n";
    // }
    for (int i1 = 0; i1 < 3; i1++)
    {
        for (int j1 = 0; j1 < 3; j1++)
        {

            for (int i2 = 0; i2 < 3; i2++)
            {
                for (int j2 = 0; j2 < 3; j2++)
                {
                    if (isAdjacent(i1, j1, i2, j2))
                    {
                        for (int i3 = 0; i3 < 3; i3++)
                        {
                            for (int j3 = 0; j3 < 3; j3++)
                            {
                                if (isAdjacent(i2, j2, i3, j3)
                                && (i1!=i2 || j1!=j2)
                                && (i1!=i3 || j1!=j3)
                                && (i2!=i3 || j2!=j3))
                                {
                                    string uhu = "";
                                    uhu += grid[i1][j1];
                                    uhu += grid[i2][j2];
                                    uhu += grid[i3][j3];
                                    words.push_back(uhu);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    sort(words.begin(), words.end());
    cout << words[0];
}