function recursiveBinarySearch(arr, target, left = 0, right = arr.length - 1) {
    // Base case: 
    if (left > right) {
        return -1; // if the element did not found
    }

    // calculate the index of the mid element
    const mid = Math.floor((left + right) / 2);

    // compare with the mid element
    if (arr[mid] === target) {
        return mid; // if the element is found, return that element
    } else if (arr[mid] < target) {
        // search in the right half
        return recursiveBinarySearch(arr, target, mid + 1, right);
    } else {
        // search in the left half
        return recursiveBinarySearch(arr, target, left, mid - 1);
    }
}

// example
const sortedArray = [1, 3, 5, 7, 9, 11, 13, 15, 17];
const target = 10;
const result = recursiveBinarySearch(sortedArray, target);

if(result == -1)
{
    console.log(`The number did not found.`)
}
else
{
    console.log(`The element ${target} is found at index ${result}.`)
}