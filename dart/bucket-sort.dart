List<int> bucketSort(List<int> arr, [int bucketSize = 5]) {
  if (arr.isEmpty) return arr;

  int min = arr.reduce((curr, next) => curr < next ? curr : next);
  int max = arr.reduce((curr, next) => curr > next ? curr : next);

  int bucketCount = ((max - min) / bucketSize).floor() + 1;
  List<List<int>> buckets = List.generate(bucketCount, (i) => []);

  for (int i = 0; i < arr.length; i++) {
    int bucketIndex = ((arr[i] - min) / bucketSize).floor();
    buckets[bucketIndex].add(arr[i]);
  }

  int index = 0;
  for (List<int> bucket in buckets) {
    bucket.sort();
    for (int num in bucket) {
      arr[index++] = num;
    }
  }

  return arr;
}

void main() {
  List<int> arr = [5, 2, 9, 1, 5, 6];
  print(bucketSort(arr));
}
