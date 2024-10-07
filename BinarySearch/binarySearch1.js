function binarySearch(arr, target) {
    let left = 0;
    let right = arr.length - 1;

    while (left <= right) {
        let mid = Math.floor((left + right) / 2);

        if (arr[mid] === target) {
            return mid; // return the element if it's found
        } else if (arr[mid] < target) {
            left = mid + 1; // Narrow search area into right half
        } else {
            right = mid - 1; // narrow search area into left half
        }
    }

    return -1; // if the element did not found
}

// example
const sortedArray = [1, 3, 5, 7, 9, 11, 13, 15, 17];
const target = 10;
const result = binarySearch(sortedArray, target);

if(result == -1)
{
    console.log(`The number did not found.`)
}
else
{
    console.log(`The element ${target} is found at index ${result}.`)
}