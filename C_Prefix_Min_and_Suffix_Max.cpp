#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int test_cases;
    cin >> test_cases;
    
    while (test_cases > 0) {
        test_cases--;
        
        int size;
        cin >> size;
        
        vector<int> numbers(size);
        for (int idx = 0; idx < size; idx++) {
            cin >> numbers[idx];
        }
        
        // Build left minimums array
        vector<int> left_mins(size);
        left_mins[0] = numbers[0];
        for (int idx = 1; idx < size; idx++) {
            left_mins[idx] = min(left_mins[idx - 1], numbers[idx]);
        }
        
        // Build right maximums array  
        vector<int> right_maxs(size);
        right_maxs[size - 1] = numbers[size - 1];
        for (int idx = size - 2; idx >= 0; idx--) {
            right_maxs[idx] = max(right_maxs[idx + 1], numbers[idx]);
        }
        
        // Generate result string
        string result = "";
        for (int idx = 0; idx < size; idx++) {
            bool is_special = false;
            
            if (numbers[idx] == left_mins[idx]) {
                is_special = true;
            }
            if (numbers[idx] == right_maxs[idx]) {
                is_special = true;
            }
            
            if (is_special) {
                result += "1";
            } else {
                result += "0";
            }
        }
        
        cout << result << endl;
    }
    
    return 0;
}