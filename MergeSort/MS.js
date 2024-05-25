function mergeSort(A, l, h) {
  if (l < h) {
    var mid = l + Math.floor((h - l) / 2);
    mergeSort(A, l, mid);
    mergeSort(A, mid + 1, h);
    merge(A, l, mid, h);
  }
}

function merge(A, low, mid, high) {
  var B = [];
  var C = [];

  // Copy elements to temporary arrays
  for (var i = 0; i <= mid - low; i++) {
    B[i] = A[low + i];
  }
  for (var j = 0; j < high - mid; j++) {
    C[j] = A[mid + 1 + j];
  }

  // Merge B and C into A
  var i = 0, j = 0, k = low;
  while (i <= (mid - low) && j < (high - mid)) {
    if (B[i] <= C[j]) {
      A[k] = B[i];
      i++;
    } else {
      A[k] = C[j];
      j++;
    }
    k++;
  }

  // Copy remaining elements of B[] if any
  while (i <= (mid - low)) {
    A[k] = B[i];
    i++;
    k++;
  }

  // Copy remaining elements of C[] if any
  while (j < (high - mid)) {
    A[k] = C[j];
    j++;
    k++;
  }
}

// テスト
var array = [12, 11, 13, 5, 6, 7, 26, 96, 2, 67];
console.log("ソート前:", array);
mergeSort(array, 0, array.length - 1);
console.log("ソート後:", array);
