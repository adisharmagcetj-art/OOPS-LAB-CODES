// 8. Find Maximum Element in an Array
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

    int maxElement = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] > maxElement)
            maxElement = arr[i];
    }

    cout << "The maximum element in the array is: "
         << maxElement << endl;

    return 0;
}
