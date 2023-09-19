void main() {
  List<int> arr = [5, 2, 9, 1, 5, 6];
  insertionSort(arr);
  print(arr);
}

void insertionSort(List<int> arr) {
  for (int i = 1; i < arr.length; i++) {
    for (int j = i - 1; j > -1; j--) {
      if (arr[j + 1] < arr[j]) {
        int temp = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = temp;
      }
    }
  }
}
