#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    string name;
    cin >> name;
    unordered_set<char> unique_chars;
    
    for (char c : name)
    {
        unique_chars.insert(c);
    }

    if (unique_chars.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}
