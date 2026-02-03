#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int getSecondLargest(vector<int> &arr) {
        int ans = INT_MIN;
        int n = arr.size();

        // first loop → find largest
        for(int i = 0; i < n; i++){
            if(arr[i] > ans)
                ans = arr[i];
        }

        int maxVal = ans;   // store largest temporarily (required logically)

        ans = INT_MIN;      // reuse ans for second largest

        // second loop → find second largest
        for(int i = 0; i < n; i++){
            if(arr[i] != maxVal && arr[i] > ans){
                ans = arr[i];
            }
        }

        if(ans == INT_MIN) return -1;
        return ans;
    }
};