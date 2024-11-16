def selectionSort(arr):
    for i in range(len(arr)):
        a = i
        for j in range(i + 1, len(arr)):
            if arr[a] > arr[j]:
                a = j
        arr[i], arr[a] = arr[a], arr[i]


if __name__ == "__main__":
    arr = [64, 34, 25, 12, 22, 11, 90]
    selectionSort(arr)
    print("Sorted array is:", arr)
