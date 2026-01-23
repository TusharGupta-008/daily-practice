#include <iostream>
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
