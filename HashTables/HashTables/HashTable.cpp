#include "HashTable.hpp"
#include <vector>
#include <stdexcept>

HashTable::HashTable(long _a, long _c, long _m)
    : a(_a), c(_c), m(_m), hashTable(_m, 0), numElements(0)
{
}

HashTable::~HashTable() {
}

void HashTable::insert(int key) {
    if (key <= 0) {
        throw std::invalid_argument("Only strictly positive numbers are allowed");
    }

    if (loadFactor() == 1.0) {
        extend();
    }

    long index = (a * key + c) % m;

    while (hashTable[index] != 0) {
        index = (index + 1) % m; // 線形探索
    }

    hashTable[index] = key;
    numElements++;
}

void HashTable::extend() {
    long newSize = m * 2; // 拡張因子を2倍に設定
    std::vector<long> newTable(newSize, 0);

    // 再ハッシュ
    for (long i = 0; i < m; ++i) {
        if (hashTable[i] != 0) {
            long newIndex = (a * hashTable[i] + c) % newSize;
            while (newTable[newIndex] != 0) {
                newIndex = (newIndex + 1) % newSize;
            }
            newTable[newIndex] = hashTable[i];
        }
    }

    hashTable = std::move(newTable); // 新しいテーブルに置き換え
    m = newSize;
}

bool HashTable::find(int key) {
    long index = (a * key + c) % m;

    while (hashTable[index] != 0) {
        if (hashTable[index] == key) {
            return true;
        }
        index = (index + 1) % m;
    }
    return false;
}

void HashTable::remove(int key){
    long index = (a * key + c) % m;

    while (hashTable[index] != 0) {
        if (hashTable[index] == key) {
            hashTable[index] = 0;
            numElements--;
            return;
        }
        index = (index + 1) % m;
    }
}

double HashTable::loadFactor() {
    return static_cast<double>(numElements) / m;
}
