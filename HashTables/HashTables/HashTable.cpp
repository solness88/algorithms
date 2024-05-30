#include "HashTable.hpp"
#include <vector>
#include <stdexcept>

HashTable::HashTable(long _a, long _c, long _m)
    : a(_a), c(_c), m(_m), hashTable(_m, 0), numElements(0)
{
}

HashTable::~HashTable() {
}

//insert using linear proving for collision resolution
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

//extend the size of hash table
void HashTable::extend() {
    long newSize = m * 2;
    std::vector<long> newTable(newSize, 0);

    for (long i = 0; i < m; ++i) {
        if (hashTable[i] != 0) {
            long newIndex = (a * hashTable[i] + c) % newSize;
            while (newTable[newIndex] != 0) {
                newIndex = (newIndex + 1) % newSize;
            }
            newTable[newIndex] = hashTable[i];
        }
    }

    hashTable = std::move(newTable); // replace to new table
    m = newSize;
}

//find key in hash table
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

//remove the number of key from the hash table
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
