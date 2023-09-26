def bucket_sort(arr, bucket_size=5):
    if not arr:
        return []

    min_val, max_val = min(arr), max(arr)
    bucket_count = (max_val - min_val) // bucket_size + 1
    buckets = [[] for _ in range(bucket_count)]

    for num in arr:
        bucket_index = (num - min_val) // bucket_size
        buckets[bucket_index].append(num)

    sorted_arr = []
    for bucket in buckets:
        bucket.sort()  # Sort each bucket individually
        sorted_arr.extend(bucket)

    return sorted_arr

if __name__ == "__main__":
    arr = [5, 2, 9, 1, 5, 6]
    print(bucket_sort(arr))
