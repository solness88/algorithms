#include <iostream>
#include <vector>
#include <cmath>

void merge(std::vector<int> &A, int low, int mid, int high) {
    std::vector<int> B(mid - low + 1);
    std::vector<int> C(high - mid);

    // Copy elements to temporary arrays
    for (int i = 0; i <= mid - low; i++) {
        B[i] = A[low + i];
    }
    for (int j = 0; j < high - mid; j++) {
        C[j] = A[mid + 1 + j];
    }

    // Merge B and C into A
    int i = 0, j = 0, k = low;
    while (i <= (mid - low) && j < (high - mid)) {
        if (B[i] <= C[j]) {
            A[k] = B[i];
            i++;
        } else {
            A[k] = C[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of B[] if any
    while (i <= (mid - low)) {
        A[k] = B[i];
        i++;
        k++;
    }

    // Copy remaining elements of C[] if any
    while (j < (high - mid)) {
        A[k] = C[j];
        j++;
        k++;
    }
}

void mergeSort(std::vector<int> &A, int low, int high) {
    if (low < high) {
        int mid = low + floor((high - low) / 2);
        mergeSort(A, low, mid);
        mergeSort(A, mid + 1, high);
        merge(A, low, mid, high);
    }
}

int main() {
    std::vector<int> array = {12, 11, 13, 5, 6, 7,57,98,39,77};
    std::cout << "ソート前: ";
    for (int num : array) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    mergeSort(array, 0, array.size() - 1);

    std::cout << "ソート後: ";
    for (int num : array) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
