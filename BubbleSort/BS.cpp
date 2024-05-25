#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int A[], int N) {
    bool swapped = true;
    while (swapped) {
        swapped = false;
        for (int i = 0; i < N - 1; i++) {
            if (A[i] > A[i + 1]) {
                swap(A[i], A[i + 1]);
                swapped = true;
            }
        }
        N--;
    }
}

int main() {
    int A[] = {5, 2, 8, 3, 1};
    int N = sizeof(A) / sizeof(A[0]);

    cout << "Before sorting:" << endl;
    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    bubbleSort(A, N);

    cout << "After sorting:" << endl;
    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
