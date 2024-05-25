function countingSort(A, K) {
  var C = new Array(K + 1).fill(0);
  var R = new Array(A.length).fill(0);
  var pos = 0;

  // Count frequencies of elements
  for (var j = 0; j < A.length; j++) {
    C[A[j]]++;
  }

  // Calculate positions of elements in the sorted array
  for (var i = 0; i < K + 1; i++) {
    for (var r = pos; r < pos + C[i]; r++) {
      R[r] = i;
    }
    pos += C[i];
  }

  return R;
}

// テスト
var array = [4, 2, 2, 8, 3, 3, 1];
var K = 8; // 最大値
console.log("ソート前:", array);
var sortedArray = countingSort(array, K);
console.log("ソート後:", sortedArray);
