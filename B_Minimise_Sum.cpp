#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        int arraySize;
        cin >> arraySize;
        
        vector<long long> arr(arraySize + 3);
        vector<long long> prefixMin(arraySize + 3);
        vector<long long> suffixSum(arraySize + 4);
        vector<long long> cumZero(arraySize + 3);
        
        for (int idx = 1; idx <= arraySize; idx++) {
            cin >> arr[idx];
        }
        
        prefixMin[1] = arr[1];
        for (int idx = 2; idx <= arraySize; idx++) {
            prefixMin[idx] = min(prefixMin[idx - 1], arr[idx]);
        }
        
        long long originalSum = 0;
        for (int idx = 1; idx <= arraySize; idx++) {
            originalSum += prefixMin[idx];
        }
        
        suffixSum[arraySize + 1] = 0;
        for (int idx = arraySize; idx >= 1; idx--) {
            suffixSum[idx] = prefixMin[idx] + suffixSum[idx + 1];
        }
        
        int firstUnchanged = arraySize + 1;
        for (int idx = 2; idx <= arraySize; idx++) {
            if (prefixMin[idx] == prefixMin[idx - 1]) {
                firstUnchanged = idx;
                break;
            }
        }
        
        long long maxSavings = 0;
        long long runningMin = LLONG_MAX;
        
        for (int pos = 2; pos <= arraySize; pos++) {
            long long currentSavings;
            
            if (pos <= firstUnchanged) {
                if (pos == 2) {
                    currentSavings = suffixSum[pos] - arr[pos];
                } else {
                    runningMin = min(runningMin, cumZero[pos - 1]);
                    currentSavings = suffixSum[pos] - min(arr[pos], runningMin);
                }
            } else {
                currentSavings = suffixSum[pos];
            }
            
            maxSavings = max(maxSavings, currentSavings);
        }
        
        cout << originalSum - maxSavings << "\n";
    }
    
    return 0;
}