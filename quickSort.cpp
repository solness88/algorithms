#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int>& A, int low, int high) {
    int pivot = A[high];
    int i = low;
    for (int j = low; j < high; j++) {
        if (A[j] <= pivot) {
            swap(A[i], A[j]);
            i++;
        }
    }
    swap(A[i], A[high]);
    return i;
}

void QS(vector<int>& A, int low, int high) {
    if (low < high) {
        int p = partition(A, low, high);
        QS(A, low, p - 1);
        QS(A, p + 1, high);
    }
}

int main() {
    vector<int> arr = {3, 8, 1, 7, 2, 10, 4, 6};
    int n = arr.size();
    QS(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
