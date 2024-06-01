//Creating hash table using linear proving as collision resolution

const a = 21;
const c = 7;
const m = 30;
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
        var pos = index;

        //if the collision occurs, the index keep increasing by one
        //until unassigned buckets is found
        while (arr[pos] != -1) {
            pos++;
            if (pos >= m) {
                pos = 0;
            }
        }
        arr[pos] = k;
    }
    return arr
}

console.log(calc())