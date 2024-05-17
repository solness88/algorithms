function partition(A, low, high) {
  let pivot = Math.floor((low + high) / 2);
  let i = low;
  for (let j = low; j < high; j++) {
    if (A[j] <= pivot) {
      [A[i], A[j]] = [A[j], A[i]];
      i++;
    }
  }
  [A[i], A[high]] = [A[high], A[i]];
  return i;
}

function quickSort(A, low, high) {
  if (low < high) {
    let p = partition(A, low, high);
    quickSort(A, low, p - 1);
    quickSort(A, p + 1, high);
  }
}

let arr = [3, 8, 1, 7, 2, 10, 4, 6];
let n = arr.length;
quickSort(arr, 0, n - 1);

console.log("Sorted array:", arr.join(" "));
