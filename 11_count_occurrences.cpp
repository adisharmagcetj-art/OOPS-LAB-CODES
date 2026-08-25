// 11. Count Occurrences of an Element
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

    int targetElement;
    cout << "Enter the element to count: ";
    cin >> targetElement;

    int count = 0;

    for (int i = 0; i < n; ++i) {
        if (arr[i] == targetElement)
            ++count;
    }

    cout << "The element " << targetElement << " appears "
         << count << " times." << endl;

    return 0;
}
