#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        int size;
        cin >> size;
        
        vector<int> arr(size);
        for (int idx = 0; idx < size; idx++) {
            cin >> arr[idx];
        }
        
        bool foundPair = false;
        int firstVal = -1, secondVal = -1;
        
        for (int left = 0; left < size && !foundPair; left++) {
            for (int right = left + 1; right < size; right++) {
                if (arr[left] > arr[right]) {
                    firstVal = arr[left];
                    secondVal = arr[right];
                    foundPair = true;
                    break;
                }
            }
        }
        
        if (foundPair) {
            cout << "YES" << endl;
            cout << "2" << endl;
            cout << firstVal << " " << secondVal << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}