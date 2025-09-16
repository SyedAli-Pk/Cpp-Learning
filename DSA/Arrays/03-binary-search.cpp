#include <iostream>
using namespace std;

int main() {
    int n, key;
    cout << "Enter size of sorted array: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int low = 0, high = n - 1, mid;
    bool found = false;

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            cout << "Element found at index " << mid << endl;
            found = true;
            break;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (!found) {
        cout << "Element not found." << endl;
    }

    delete[] arr;
    arr = nullptr;

    return 0;
}
