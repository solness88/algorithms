// JS: Using iteration

function sumDigitsIterative(n) {
    let sum = 0;
    while (n !== 0) {
        sum += n % 10;
        n = Math.floor(n / 10);
    }
    return sum;
}

console.log(sumDigitsIterative(12345));  // 15



//////////////////////////////////////////////
//////////////////////////////////////////////



function sumDigitsStringIterative(n) {
    let sum = 0;
    const strNum = String(n);
    
    for (let digit of strNum) {
        sum += parseInt(digit);
    }
    
    return sum;
}

console.log(sumDigitsStringIterative(12345));  // 15