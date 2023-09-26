function bucketSort(arr, bucketSize = 5) {
    if (arr.length === 0) return arr;

    let min = Math.min(...arr);
    let max = Math.max(...arr);

    let bucketCount = Math.floor((max - min) / bucketSize) + 1;
    let buckets = Array.from({ length: bucketCount }, () => []);

    for (let i = 0; i < arr.length; i++) {
        let bucketIndex = Math.floor((arr[i] - min) / bucketSize);
        buckets[bucketIndex].push(arr[i]);
    }

    return buckets.reduce((sortedArr, bucket) => {
        return sortedArr.concat(bucket.sort((a, b) => a - b));
    }, []);
}

let arr = [5, 2, 9, 1, 5, 6];
console.log(bucketSort(arr));
