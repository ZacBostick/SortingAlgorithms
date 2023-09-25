function countingSort(arr) {
    let max = Math.max(...arr);
    let min = Math.min(...arr);
    let range = max - min + 1;
    let count = new Array(range).fill(0);
    let output = new Array(arr.length).fill(0);

    for(let num of arr) {
        count[num - min]++;
    }

    for(let i = 1; i < count.length; i++) {
        count[i] += count[i-1];
    }

    for(let i = arr.length - 1; i >= 0; i--) {
        output[count[arr[i] - min] - 1] = arr[i];
        count[arr[i] - min]--;
    }

    return output;
}

let arr = [5, 2, 9, 1, 5, 6];
console.log(countingSort(arr));
