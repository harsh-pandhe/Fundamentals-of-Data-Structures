arr = [42, 1, 24, 56, 343, 12, 15, 98]
n = arr.length

function bubble_sort(arr, n) {
    for (i = 0; i < n - 1; i++) {
        swapped = false
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1]
                arr[j + 1] = temp
                swapped = true
            }
        }
        if (swapped == false) {
            break
        }
    }
}

bubble_sort(arr, n)
console.log(arr)
