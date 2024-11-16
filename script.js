arr = [421, 1, 24, 56, 343, 12, 15, 98]
n = arr.length

function insertionSort(arr, n) {
    for (i = 1; i < n; ++i) {
        key = arr[i]
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]
            j = j - 1
        }
        arr[j + 1] = key
    }
}

insertionSort(arr, n)
console.log(arr)
