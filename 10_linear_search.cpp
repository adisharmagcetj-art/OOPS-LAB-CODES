// 10. Linear Search
#include <iostream>
#include <vector>
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

    int searchElement;
    cout << "Enter the element to search: ";
    cin >> searchElement;

    int index = -1;

    for (int i = 0; i < n; ++i) {
        if (arr[i] == searchElement) {
            index = i;
            break;
        }
    }

    if (index != -1)
        cout << searchElement << " found at index: " << index << endl;
    else
        cout << searchElement << " not found in the array." << endl;

    return 0;
}
