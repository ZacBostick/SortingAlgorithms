List<int> countingSort(List<int> arr) {
  int max = arr.reduce((curr, next) => curr > next ? curr : next);
  int min = arr.reduce((curr, next) => curr < next ? curr : next);
  int range = max - min + 1;
  List<int> count = List<int>.filled(range, 0);
  List<int> output = List<int>.filled(arr.length, 0);

  for (int num in arr) {
    count[num - min]++;
  }

  for (int i = 1; i < count.length; i++) {
    count[i] += count[i - 1];
  }

  for (int i = arr.length - 1; i >= 0; i--) {
    output[count[arr[i] - min] - 1] = arr[i];
    count[arr[i] - min]--;
  }

  return output;
}

void main() {
  List<int> arr = [5, 2, 9, 1, 5, 6];
  print(countingSort(arr));
}
