#include <iostream>
#include <vector>

using namespace std;

int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;  // Element found
        }

        if (arr[mid] < target) {
            left = mid + 1;  // Target is in the right half
        } else {
            right = mid - 1;  // Target is in the left half
        }
    }

    return -1;  // Element not found
}

int main() {
    vector<int> sortedArray = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target;

    cout << "Enter the target element from (1 - 10) : ";
    cin >> target;

    int result = binarySearch(sortedArray, target);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
