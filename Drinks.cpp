#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
int main()
{
    double n;
    cin >> n;
    vector<double> arr(n);
    double sum;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << fixed << setprecision(12) << sum/n;
}