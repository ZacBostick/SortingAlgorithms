#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> bucketSort(const std::vector<int>& arr) {
    if (arr.empty()) return arr;

    int min = *std::min_element(arr.begin(), arr.end());
    int max = *std::max_element(arr.begin(), arr.end());

    int bucketSize = 5;
    int bucketCount = (max - min) / bucketSize + 1;
    std::vector<std::vector<int>> buckets(bucketCount);

    for (int num : arr) {
        int bucketIndex = (num - min) / bucketSize;
        buckets[bucketIndex].push_back(num);
    }

    std::vector<int> sortedArr;
    for (auto& bucket : buckets) {
        std::sort(bucket.begin(), bucket.end());
        sortedArr.insert(sortedArr.end(), bucket.begin(), bucket.end());
    }

    return sortedArr;
}

int main() {
    std::vector<int> arr = {5, 2, 9, 1, 5, 6};
    std::vector<int> sorted = bucketSort(arr);
    for (int num : sorted) {
        std::cout << num << " ";
    }
    return 0;
}
