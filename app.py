def shellSort(arr, n):
    gap = n // 2
    while gap > 0:
        for i in range(gap, n):
            temp = arr[i]
            j = i
            while j >= gap and arr[j - gap] > temp:
                arr[j] = arr[j - gap]
                j -= gap
            arr[j] = temp
        gap //= 2


if __name__ == "__main__":
    arr = [54, 12, 34, 56, 78, 90, 23, 45, 67, 89]
    n = len(arr)
    shellSort(arr, n)
    print("Sorted array is:", arr)
