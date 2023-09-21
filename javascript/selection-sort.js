function selectionSort(arr){
    for(let i = 0; i < arr.length; i++){
        let minIdx = i;
        for(let j = i + 1; j < arr.length; j++){
            if(arr[j] < arr[minIdx]){
                minIdx = j;
            }
        }
        if(minIdx !== i) {
            [arr[i], arr[minIdx]] = [arr[minIdx], arr[i]];
        }
    }
    return arr;
}

let arr = [5, 2, 9, 1, 5, 6];
console.log(selectionSort(arr));
