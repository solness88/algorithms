#include <iostream>
#include <vector>

std::vector<int> insertionSort(std::vector<int> A)
{
  int N = A.size();
  for (int j = 1; j < N; j++)
  {
    int ins = A[j];
    int i = j - 1;
    while (i >= 0 && ins < A[i])
    {
      A[i + 1] = A[i];
      i = i - 1;
    }
    A[i + 1] = ins;
  }
  return A;
}

int main()
{
  std::vector<int> array = {5, 3, 8, 4, 2};

  // insertionSort(array);

  for (int num : insertionSort(array))
  {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  return 0;
}
