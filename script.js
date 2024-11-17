let arr = [421, 1, 24, 56, 343, 12, 15, 98]
let n = arr.length

function shellSort(arr, n) {
    for (gap = Math.floor(n / 2); gap > 0; Math.floor(gap /= 2)) {
        for (i = gap; i < n; i++) {
            let temp = arr[i]
            let j
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap]
            }
            arr[j] = temp
        }
    }
}
shellSort(arr, n)
console.log("" + arr)
