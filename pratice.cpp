#include <iostream>
using namespace std;

int main(){

  //Reverse of an array 

  /* class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        
        int n = arr.size();
       
        int end = n-1;
        
        for(int st=0;st<end;st++){
            
           swap(arr[st],arr[end]);
        
           end--;
        }
        
        
        
    }
};    

*/

// Secong maximum
// class Solution {
// public:
//     int getSecondLargest(vector<int> &arr) {
//         int ans = INT_MIN;
//         int n = arr.size();

//         // first loop → find largest
//         for(int i = 0; i < n; i++){
//             if(arr[i] > ans)
//                 ans = arr[i];
//         }

//         int maxVal = ans;   // store largest temporarily (required logically)

//         ans = INT_MIN;      // reuse ans for second largest

//         // second loop → find second largest
//         for(int i = 0; i < n; i++){
//             if(arr[i] != maxVal && arr[i] > ans){
//                 ans = arr[i];
//             }
//         }

//         if(ans == INT_MIN) return -1;
//         return ans;
//     }
// };

/* first maximum element

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int ans = INT_MIN ;
        int n=arr.size();
        
        
        for(int i=0;i<n;i++){
            if(arr[i]>ans)
            ans=arr[i];
        }

*/





}