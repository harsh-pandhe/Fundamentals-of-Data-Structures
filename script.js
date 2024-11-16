arr = [421, 1, 24, 56, 343, 12, 15, 98]
n = arr.length

function selectionSort(arr, n) {
    for (i = 0; i < n - 1; i++) {
        a = i;
        for (j = i + 1; j < n; j++) {
            if (arr[a] > arr[j]) {
                a = j;
            }
        }
        temp = arr[a];
        arr[a] = arr[i];
        arr[i] = temp;
    }
}

selectionSort(arr, n)
console.log(arr)
