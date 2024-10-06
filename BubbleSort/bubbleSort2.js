//Bubble sort
var arr = [5, 9, 2, 6, 3, 8, 7, 1, 18, 77, 64,109, 4, 55];

swapped = true;

while(swapped)
{
    swapped = false;
    for(var i = 0; j < arr.length; i++)
    {
        if(arr[i] > arr[i + 1])
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            swapped = true;
        }
    }
}

console.log(arr);