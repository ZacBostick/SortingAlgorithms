void main() {
  List<int> arr = [5, 2, 9, 1, 5, 6];
  selectionSort(arr);
  print(arr);
}

void selectionSort(List<int> arr) {
  for (int i = 0; i < arr.length; i++) {
    int minIdx = i;
    for (int j = i + 1; j < arr.length; j++) {
      if (arr[j] < arr[minIdx]) {
        minIdx = j;
      }
    }
    if (minIdx != i) {
      int temp = arr[i];
      arr[i] = arr[minIdx];
      arr[minIdx] = temp;
    }
  }
}
