#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
//substr
int main()
{
    int a;
    cin >> a;
    if (a >= 0)
        cout << a;
    else
    {
        string lol = to_string(a);
        string last_removed = lol;
        string second_last_removed = lol;
        last_removed.pop_back();
        
        if (lol.length() > 2) {
            second_last_removed = lol.substr(0, lol.length() - 2) + lol.substr(lol.length() - 1);
        } else {
            second_last_removed = "";
        }
        
        int b = 0, c = 0;
        b = stoi(last_removed);
        
        if (!second_last_removed.empty()) {
            c = stoi(second_last_removed);
        } else {
            c = INT_MIN;
        }
        
    
        int max_val = max({a, b, c});
        cout << max_val;
    }
}