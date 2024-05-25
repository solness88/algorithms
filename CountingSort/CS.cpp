#include <iostream>
#include <vector>

std::vector<int> countingSort(std::vector<int> &A, int K) {
    std::vector<int> C(K + 1, 0); // 頻度をカウントする配列
    std::vector<int> R(A.size(), 0); // ソートされた配列
    int pos = 0;

    // 要素の頻度をカウント
    for (int j = 0; j < A.size(); j++) {
        C[A[j]]++;
    }

    // ソートされた配列内の各要素の位置を計算
    for (int i = 0; i < K + 1; i++) {
        for (int r = pos; r < pos + C[i]; r++) {
            R[r] = i;
        }
        pos += C[i];
    }

    return R;
}

int main() {
    std::vector<int> array = {4, 2, 2, 8, 3, 3, 1};
    int K = 8; // 最大値
    std::cout << "ソート前: ";
    for (int num : array) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::vector<int> sortedArray = countingSort(array, K);

    std::cout << "ソート後: ";
    for (int num : sortedArray) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
