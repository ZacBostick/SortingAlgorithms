#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& arr) {
    for(int i = 0; i < arr.size(); i++) {
        for(int j = 0; j < arr.size() - 1 - i; j++) {
            if(arr[j] > arr[j+1]) {
                std::swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {
    std::vector<int> arr = {5, 2, 9, 1, 5, 6};
    bubbleSort(arr);
    for(int num : arr) {
        std::cout << num << " ";
    }
    return 0;
}
