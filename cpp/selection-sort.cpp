#include <iostream>
#include <vector>

void selectionSort(std::vector<int>& arr) {
    for(int i = 0; i < arr.size(); i++) {
        int minIdx = i;
        for(int j = i + 1; j < arr.size(); j++) {
            if(arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        if(minIdx != i) {
            std::swap(arr[i], arr[minIdx]);
        }
    }
}

int main() {
    std::vector<int> arr = {5, 2, 9, 1, 5, 6};
    selectionSort(arr);
    for(int num : arr) {
        std::cout << num << " ";
    }
    return 0;
}
