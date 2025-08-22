#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int start = 0, end = n - 1;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (arr[mid] == key) {
            return mid; 
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1; 
        }
    }
    return -1; 
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " sorted elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int result = binarySearch(arr, n, key);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}
