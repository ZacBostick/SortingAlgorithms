#include <iostream>
#include <vector>

void insertionSort(std::vector<int>& arr) {
    for(int i = 1; i < arr.size(); i++) {
        for(int j = i - 1; j > -1; j--) {
            if(arr[j+1] < arr[j]) {
                std::swap(arr[j+1], arr[j]);
            }
        }
    }
}

int main() {
    std::vector<int> arr = {5, 2, 9, 1, 5, 6};
    insertionSort(arr);
    for(int num : arr) {
        std::cout << num << " ";
    }
    return 0;
}
