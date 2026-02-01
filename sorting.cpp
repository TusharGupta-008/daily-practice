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

