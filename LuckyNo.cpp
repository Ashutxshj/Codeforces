#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;


    unsigned long long result = 1ULL << n; // Compute 2^n using bitwise shift
    cout << result << endl;

    return 0;
}
