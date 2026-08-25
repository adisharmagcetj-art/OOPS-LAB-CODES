// 9. Find Minimum Element in an Array
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

    int minElement = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] < minElement)
            minElement = arr[i];
    }

    cout << "The minimum element in the array is: "
         << minElement << endl;

    return 0;
}
