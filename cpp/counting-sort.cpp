#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> countingSort(const std::vector<int>& arr) {
    int max = *std::max_element(arr.begin(), arr.end());
    int min = *std::min_element(arr.begin(), arr.end());
    int range = max - min + 1;

    std::vector<int> count(range, 0);
    std::vector<int> output(arr.size());

    for(int num : arr) {
        count[num - min]++;
    }

    for(int i = 1; i < count.size(); i++) {
        count[i] += count[i-1];
    }

    for(int i = arr.size() - 1; i >= 0; i--) {
        output[count[arr[i] - min] - 1] = arr[i];
        count[arr[i] - min]--;
    }

    return output;
}

int main() {
    std::vector<int> arr = {5, 2, 9, 1, 5, 6};
    std::vector<int> sorted = countingSort(arr);
    for (int num : sorted) {
        std::cout << num << " ";
    }
    return 0;
}
