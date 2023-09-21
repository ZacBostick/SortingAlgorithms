def selection_sort(arr):
    for i in range(len(arr)):
        minIdx = i
        for j in range(i+1, len(arr)):
            if arr[j] < arr[minIdx]:
                minIdx = j
        if minIdx != i:
            arr[i], arr[minIdx] = arr[minIdx], arr[i]
    return arr

if __name__ == "__main__":
    arr = [5, 2, 9, 1, 5, 6]
    print(selection_sort(arr))
