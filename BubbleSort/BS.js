function bubbleSort(A, N) {
  var swapped;
  do {
    swapped = false;
    for (var i = 0; i < A.length - 1; i++) {
      if (A[i] > A[i + 1]) {
        var temp = A[i];
        A[i] = A[i + 1];
        A[i + 1] = temp;
        swapped = true;
      }
    }
  } while (swapped);
  return A;
}

//===================================//
function bubbleSort(A) {
  for (var i = 0; i < A.length - 1; i++) {
    for (var j = A.length - 1; j > i; j--) {
      if (A[j] < A[j - 1]) {
        var temp = A[j];
        A[j] = A[j - 1];
        A[j - 1] = temp;
      }
    }
  }
  return A;
}
