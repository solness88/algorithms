function insertionSort(A) {
  var N = A.length;
  for (var j = 1; j < N; j++) {
    var ins = A[j];
    var i = j - 1;
    while (i >= 0 && ins < A[i]) {
      A[i + 1] = A[i];
      i = i - 1;
    }
    A[i + 1] = ins;
  }
  return A;
}
