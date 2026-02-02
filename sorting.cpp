#include <iostream>
#include <vector>
using namespace std;

// void selectionSort(int arr[], int n) {
//     for(int i = 0; i < n - 1; i++) {
//         int minIndex = i;

//         for(int j = i + 1; j < n; j++) {
//             if(arr[j] < arr[minIndex]) {
//                 minIndex = j;
//             }
//         }

//         swap(arr[i], arr[minIndex]);
//     }
// }


// void insertionSort(int arr[], int n) {
//     for(int i = 1; i < n; i++) {
//         int key = arr[i];
//         int j = i - 1;

//         while(j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j--;
//         }

//         arr[j + 1] = key;
//     }
// }
// void merge(vector<int>& a, int l, int m, int r) {
//     vector<int> temp;
//     int i = l, j = m + 1;

//     while (i <= m && j <= r) {
//         if (a[i] <= a[j]) temp.push_back(a[i++]);
//         else temp.push_back(a[j++]);
//     }
//     while (i <= m) temp.push_back(a[i++]);
//     while (j <= r) temp.push_back(a[j++]);

//     for (int k = l; k <= r; k++)
//         a[k] = temp[k - l];
// }

// void mergeSort(vector<int>& a, int l, int r) {
//     if (l >= r) return;
//     int m = (l + r) / 2;
//     mergeSort(a, l, m);
//     mergeSort(a, m + 1, r);
//     merge(a, l, m, r);
// }
//  #include <iostream>
// using namespace std;

// void printN(int n) {
//     if (n == 0) return;   // base case
//     cout << n << " ";
//     printN(n - 1);        // recursive call
// }

// int main() {
//     printN(5);
// }

// #include <iostream>
// using namespace std;

// int fib(int n) {
//     if (n == 0) return 0;
//     if (n == 1) return 1;
//     return fib(n-1) + fib(n-2);
// }

// int main() {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;

//     cout << "Fibonacci number = " << fib(n);
//     return 0;
// }
