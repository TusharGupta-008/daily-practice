#include <iostream>
#include <vector>
using namespace std;

// Linear search

/* int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;   // element found
    }
    return -1;  // element not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;

    int result = linearSearch(arr, n, key);

    if (result != -1)
        cout << "Element found at index " << result;
    else
        cout << "Element not found";

    return 0;
}
 */

// optimised code for binary search

// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int n, int key)
// {
//   int low = 0, high = n - 1;

//   while (low <= high)
//   {
//     int mid = low + (high - low) / 2; // avoids overflow

//     if (arr[mid] == key)
//       return mid;
//     else if (arr[mid] < key)
//       low = mid + 1;
//     else
//       high = mid - 1;
//   }
//   return -1; // not found
// }

// int main()
// {
//   int arr[] = {10, 20, 30, 40, 50, 60};
//   int n = sizeof(arr) / sizeof(arr[0]);
//   int key = 40;

//   int index = binarySearch(arr, n, key);

//   if (index != -1)
//     cout << "Found at index ";
// }


/* Rotate the array by one

class Solution {
  public:
    void rotate(vector<int> &arr) {
        
        int n = arr.size();
         int temp = arr[n-1];
        
        for (int i =n-2;i>=0;i--){
           
            
            arr[i+1] = arr[i];
            
           
            
            
        } arr[0] = temp;
        
        
    }
};  */


// int main (){
//     int n;
//     cout <<"Enter the number : ";
//     cin>>n;

//     int arr[1000];
//     arr[0]=0;
//     arr[1]=1;

//     for(int i= 2;i<n;i++) {
//         arr[i]=arr[i-1]+arr[i-2];

//     }
    

//     cout<<arr[n-1];

    // Problem 704 on leetcode

//     class Solution {
// public:
//     int search(vector<int>& arr, int tar) {

//         int st = 0;
//         int end = arr.size()-1;

//         while (st <= end) {
//             int mid = st+(end-st) / 2;

//             if (arr[mid] == tar) {
//                 return mid;
//             } else if (arr[mid] < tar) {
//                 st = mid + 1;
//             } else {
//                 end = mid - 1;
//             }
//         } return -1;
//     }
// };
// }

// class Solution {
// public:
//     vector<int> searchRange(vector<int>& arr, int k) {
//         // First Occurence
//         int st = 0, end = arr.size() - 1, first = -1, last = -1;

//         while (st <= end) {
//             int mid = st + (end - st) / 2;
//             if (arr[mid] == k) {
//                 first = mid;
//                 end = mid - 1;

//             } else if (arr[mid] < k) {
//                 st = mid + 1;
//             } else {
//                 end = mid - 1;
//             }
//         }
//          // Last Occurence

//         st = 0, end = arr.size() - 1;
//         while (st <= end) {
//             int mid = st + (end - st) / 2;

//             if (arr[mid] == k) {
//                 last = mid;
//                 st = mid + 1;
//             } else if (arr[mid] < k) {
//                 st = mid + 1;

//             } else {
//                 end = mid - 1;
//             }
//         }

//         vector<int>a(2);
//         a[0]=first;
//         a[1]=last;

//         return a;
//     } 
    
// };


//insert position
// class Solution {
// public:
//     int searchInsert(vector<int>& arr, int t) {
//         // int st = 0,end=nums.size()-1;

//         int n = arr.size() - 1;

//         for (int i = 0; i <= n; i++) {
//             if (arr[i] == t) {
//                 return i;
//             } else if (arr[i] > t) {
//                 return i;

//             } 
//         }  return n+1;
//     }
// };
// int main (){
//      int st = 0, end = arr.size() - 1, index = arr.size();
//         while (st <= end) {
//             int mid = st + (end - st) / 2;

//             if (arr[mid] == t) {
//                 index = mid;
//                 break;
//             } else if (arr[mid] > t){
//                 index = mid;
//                 end = mid-1;
//             }
//             else{
//                 st = mid+1;
//             }
//         } return index;

// }

// Sqart x
// class Solution {
// public:
//     int mySqrt(int x) {

//         int st=0,end=x,ans,mid;

//         while (st<=end){
//              mid = st+(end-st)/2;

//             if (mid*mid==x){
//                 ans= mid;
//                 break;
//             }
//             else if(mid*mid<x){
//                 ans=mid;
//                 st = mid+1;
//             }
//             else{
//                 end = mid-1;
//             }
//         } return mid;
        
//     }
// };

// class Solution {
// public:
//     int mySqrt(int x) {

//         int st=0,end=x,ans,mid;

//         while (st<=end){
//              mid = st+(end-st)/2;

//             if (mid*mid==x){
//                 ans= mid;
//                 break;
//             }
//             else if(mid*mid<x){
//                 ans=mid;
//                 st = mid+1;
//             }
//             else{
//                 end = mid-1;
//             }
//         } return mid;
        
//     }
// };

 
//     bool isPossible(vector<int>& boards, int painters, int maxTime) {
//     int painterCount = 1;
//     long long currentSum = 0;

//     for (int i = 0; i < boards.size(); i++) {
//         if (boards[i] > maxTime)
//             return false;

//         if (currentSum + boards[i] <= maxTime) {
//             currentSum += boards[i];
//         } else {
//             painterCount++;
//             currentSum = boards[i];

//             if (painterCount > painters)
//                 return false;
//         }
//     }
//     return true;
// }

// int painterPartition(vector<int>& boards, int painters) {
//     int low = 0, high = 0, ans = -1;

//     for (int b : boards) {
//         high += b;
//         low = max(low, b);
//     }

//     while (low <= high) {
//         int mid = low + (high - low) / 2;

//         if (isPossible(boards, painters, mid)) {
//             ans = mid;
//             high = mid - 1;   // try to minimize
//         } else {
//             low = mid + 1;
//         }
//     }
//     return ans;
// }

// int main() {
//     vector<int> boards = {10, 20, 30, 40};
//     int painters = 2;

//     cout << painterPartition(boards, painters);
//     return 0;
// }

// bool canPlaceCows(vector<int>& stalls, int cows, int dist) {
//     int count = 1;              // first cow placed
//     int lastPos = stalls[0];

//     for (int i = 1; i < stalls.size(); i++) {
//         if (stalls[i] - lastPos >= dist) {
//             count++;
//             lastPos = stalls[i];
//         }
//         if (count == cows)
//             return true;
//     }
//     return false;
// }

// int aggressiveCowsBrute(vector<int>& stalls, int cows) {
//     sort(stalls.begin(), stalls.end());

//     int maxDist = stalls.back() - stalls.front();
//     int ans = 0;

//     // Try every possible distance
//     for (int d = 1; d <= maxDist; d++) {
//         if (canPlaceCows(stalls, cows, d)) {
//             ans = d;   // valid distance
//         }
//     }
//     return ans;
// }

// int main() {
//     vector<int> stalls = {1, 2, 4, 8, 9};
//     int cows = 3;

//     cout << aggressiveCowsBrute(stalls, cows);
//     return 0;
// }

bool canPlaceCows(vector<int>& stalls, int cows, int minDist) {
    int count = 1;              // place first cow
    int lastPos = stalls[0];

    for (int i = 1; i < stalls.size(); i++) {
        if (stalls[i] - lastPos >= minDist) {
            count++;
            lastPos = stalls[i];
        }
        if (count == cows)
            return true;
    }
    return false;
}

int aggressiveCows(vector<int>& stalls, int cows) {
    sort(stalls.begin(), stalls.end());

    int low = 1;
    int high = stalls.back() - stalls.front();
    int ans = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (canPlaceCows(stalls, cows, mid)) {
            ans = mid;          // valid, try bigger distance
            low = mid + 1;
        } else {
            high = mid - 1;     // reduce distance
        }
    }
    return ans;
}

int main() {
    vector<int> stalls = {1, 2, 4, 8, 9};
    int cows = 3;

    cout << aggressiveCows(stalls, cows);
    return 0;
}