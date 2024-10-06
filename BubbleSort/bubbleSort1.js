//Bubble sort

var arr = [5, 9, 2, 6, 3, 8, 7, 1, 18, 77, 64,109, 4, 55];
var swapped = false;

for(var i = 0; i < arr.length; i++)
{
    for(var j = 0; j < arr.length -i -1; j++)
    {
        var temp;
        
        if(arr[j] > arr[j + 1])
        {
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
            swapped = true;
        }
    }
    
    if (!swapped) {
        break;
    }
    
}



console.log(arr);