#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // avoid overflow

        if (arr[mid] == target) {
            return mid; // return the index if the element is found
        } else if (arr[mid] < target) {
            left = mid + 1; // limit search area into right half
        } else {
            right = mid - 1; // limit search area into left half
        }
    }

    return -1; // if the element is not found
}

int main() {
    std::vector<int> sortedArray = {1, 3, 5, 7, 9, 11, 13, 15, 17};
    int target = 7;

    int result = binarySearch(sortedArray, target);

    if (result != -1) {
        std::cout << "number " << target << " was found at the index of " << result << "." << std::endl;
    } else {
        std::cout << "number " << target << " is not present in this array." << std::endl;
    }

    return 0;
}
