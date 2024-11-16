arr = [10, 22, 35, 40, 45, 50, 80, 82, 85, 90, 100, 235]
x = 235
n = arr.length;

function jump(arr, x, n) {
    step = Math.sqrt(n);
    prev = 0;

    while (arr[Math.min(step, n) - 1] < x) {
        prev = step;
        step += Math.sqrt(n);
        if (prev >= n) {
            return -1;
        }
    }

    while (arr[prev] < x) {
        prev++;
        if (prev == Math.min(step, n)) {
            return -1;
        }
    }

    if (arr[prev] == x) {
        return prev;
    }
    return -1;
}

if (jump(arr, x, n) == -1) {
    console.log("Element not found");
} else {
    console.log("Element found at index " + jump(arr, x, n));
}