// 12. Second Largest Element
#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array (at least 2): ";
    cin >> n;

    if (n < 2) {
        cout << "Please enter at least 2 elements." << endl;
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int firstLargest = numeric_limits<int>::min();
    int secondLargest = numeric_limits<int>::min();

    for (int x : arr) {
        if (x > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = x;
        } else if (x > secondLargest && x < firstLargest) {
            secondLargest = x;
        }
    }

    if (secondLargest == numeric_limits<int>::min())
        cout << "There is no unique second largest element." << endl;
    else
        cout << "The second largest element is: "
             << secondLargest << endl;

    return 0;
}
