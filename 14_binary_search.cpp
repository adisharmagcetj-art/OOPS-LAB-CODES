// 14. Binary Search
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be positive." << endl;
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    // Binary search requires a sorted array.
    sort(arr.begin(), arr.end());

    cout << "Sorted array: ";
    for (int x : arr)
        cout << x << " ";
    cout << endl;

    int searchElement;
    cout << "Enter the element to search: ";
    cin >> searchElement;

    int low = 0;
    int high = n - 1;
    int index = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == searchElement) {
            index = mid;
            break;
        } else if (arr[mid] < searchElement) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (index != -1)
        cout << searchElement << " found at sorted-array index: "
             << index << endl;
    else
        cout << searchElement << " not found in the array." << endl;

    return 0;
}
