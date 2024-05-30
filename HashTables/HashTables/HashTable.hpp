#ifndef HASHTABLE_HPP
#define HASHTABLE_HPP
#include <vector>

class HashTable {
    public:
      int *buckets = 0;
      long a;
      long c;
      long m;
      std::vector<long> hashTable;
      int numElements;

    public:
      HashTable(long, long, long);
      ~HashTable();
      void insert(int);
      void extend();
      bool find(int);
      void remove(int);
      double loadFactor();
};

#endif
