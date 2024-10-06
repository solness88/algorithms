function bubbleSortRecursive(arr, n = arr.length) {
    // Base case
    if (n <= 1) {
        return arr;
    }
    
    // move the largest num to the last position
    for (let i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            // swap
            var temp;
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    
    // recursively call the function
    return bubbleSortRecursive(arr, n - 1);
}

let arr = [5, 9, 2, 6, 3, 8, 7, 1];
bubbleSortRecursive(arr);
console.log(arr);