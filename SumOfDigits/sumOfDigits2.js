// JS: Using recursion

function sumDigitsRecursive(n) {
    if (n === 0) {
        return 0;
    }
    return (n % 10) + sumDigitsRecursive(Math.floor(n / 10));
}

console.log(sumDigitsRecursive(12345));  // 15



/////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////



function sumDigitsStringRecursive(n) {
    const strNum = String(n);
    
    if (strNum.length === 1) {
        return parseInt(strNum);
    }
    
    return parseInt(strNum[0]) + sumDigitsStringRecursive(strNum.slice(1));
}

console.log(sumDigitsStringRecursive(12345));  // 出力: 15