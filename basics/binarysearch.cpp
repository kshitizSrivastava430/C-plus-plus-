#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int target) {
    if (low > high) 
    return -1;
    int mid = (low + high) / 2;
    if (arr[mid] == target) return mid;
    if (target < arr[mid]) return binarySearch(arr, low, mid - 1, target);
    return binarySearch(arr, mid + 1, high, target);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    cin >> x;
    int result = binarySearch(arr, 0, n - 1, x);
    if (result == -1) cout << "Not found";
    else cout << "Found at index " << result;
    return 0;
}