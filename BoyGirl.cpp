#include <iostream>
#include <set>
using namespace std;

int main()
{
    string name;
    cin >> name;
    set<char> st;
    
    for (char c : name)
    {
        st.insert(c);
    }

    if (st.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}
