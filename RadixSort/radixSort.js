function getMax(array) { // O(n)
  let max = 0
  for (let num of array) {
    if (max < num.toString().length) {
      max = num.toString().length;
    }
  }
  return max
}

function getPosition(num, place) {
  return Math.floor(num / Math.pow(10, place)) % 10;
}

function radixSort(array) { // O(nk)
  var max = getMax(array)
  for (let i = 0; i < max; i++) {
    let buckets = Array.from({ length: 10 }, () => [])
    for (let j = 0; j < array.length; j++) {
      buckets[getPosition(array[j], i)].push(array[j])
    }
    array = [].concat(...buckets)
  }
  return array
}

console.log(radixSort([345, 678, 423, 579, 998, 124, 135, 677, 899, 523, 678, 333, 366, 781]))
