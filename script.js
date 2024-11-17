arr = [421, 1, 24, 56, 343, 12, 15, 98]
n = arr.length

function partition(arr, low, high) {
    let pivot = arr[high]
    i = low - 1

    for (j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            [arr[i], arr[j]] = [arr[j], arr[i]]
        }
    }
    [arr[i + 1], arr[high]] = [arr[high], arr[i + 1]]
    return i + 1
}

function quickSort(arr, low, high) {
    if (low < high) {
        let pi = partition(arr, low, high)
        quickSort(arr, low, pi - 1)
        quickSort(arr, pi + 1, high)
    }
}
quickSort(arr, 0, n - 1)
console.log(arr)
