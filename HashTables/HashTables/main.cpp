#include "HashTable.hpp"
#include <iostream>

int main() {
    HashTable ht(1, 1, 10);

    ht.insert(5);
    ht.insert(15);
    ht.insert(25);
    
    std::cout << "Table after insertions:" << std::endl;
    for (long i = 0; i < ht.m; ++i) {
        std::cout << i << ": " << ht.hashTable[i] << std::endl;
    }

    std::cout << "Finding values:" << std::endl;
    std::cout << "Find 5: " << (ht.find(5) ? "Found" : "Not Found") << std::endl;
    std::cout << "Find 15: " << (ht.find(15) ? "Found" : "Not Found") << std::endl;
    std::cout << "Find 25: " << (ht.find(25) ? "Found" : "Not Found") << std::endl;
    std::cout << "Find 35: " << (ht.find(35) ? "Found" : "Not Found") << std::endl;

    ht.remove(15);
    std::cout << "Table after removing 15:" << std::endl;
    for (long i = 0; i < ht.m; ++i) {
        std::cout << i << ": " << ht.hashTable[i] << std::endl;
    }

    std::cout << "Current load factor: " << ht.loadFactor() << std::endl;

    for (int i = 1; i <= 20; ++i) {
        ht.insert(i * 10);
    }
    std::cout << "Table after extending:" << std::endl;
    for (long i = 0; i < ht.m; ++i) {
        std::cout << i << ": " << ht.hashTable[i] << std::endl;
    }
    return 0;
}
