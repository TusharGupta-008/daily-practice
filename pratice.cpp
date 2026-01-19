#include <iostream>
using namespace std;

int main(){

  //Reverse of an array 
  class Solution {
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
  
}