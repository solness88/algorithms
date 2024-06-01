const a = 31;
const c = 37;
const m = 50;
var arr = Array.from( { length : m } );
arr.fill(-1);

//calculate "k", the value that is assigned into the array 
function calcK(i){
    return 2*i*i+5*i-5
}
//calculate the index using hash function

function calcIndex(k){
    return (a*k+c) % m;
}

function calc(){
    for(var i = 1; i <= 20; i++){
        var k = calcK(i);
        var index = calcIndex(k);
        if(arr[index] != -1){
            return index
        }
        arr[index] = k;
    }
}

console.log(calc())