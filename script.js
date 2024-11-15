arr = [1, 11, 45, 67, 76, 111, 212, 5765, 12311]
key = 111

start = 0
end = arr.length - 1
while (start <= end) {
    mid = Math.floor(start + (end - start) / 2)
    console.log(start, mid, end)
    if (arr[mid] == key) {
        console.log("Element found at index " + mid)
        break
    } else if (arr[mid] < key) {
        start = mid + 1
    } else {
        end = mid - 1
    }
    if (start > end) {
        console.log("Element not found")
    }
}