arr = [10, 22, 35, 40, 45, 50, 80, 82, 85, 90, 100, 235]
x = 235
n = arr.length;

function fibo(arr, x, n) {
    a = 0
    b = 1
    c = b + a

    while (c < n) {
        b = a
        a = c
        c = b + a
    }

    offset = -1

    while (c > 1) {
        i = Math.min(offset + b, n - 1)

        if (arr[i] < x) {
            c = a
            a = b
            b = c - a
            offset = i
        }
        else if (arr[i] > x) {
            c = b
            a -= b
            b = c - a
        }
        else {
            return i;
        }
    }

    if (a && arr[n - 1] == x) {
        return n - 1;
    }
    return -1;

}
ind = fibo(arr, x, n)
if (ind >= 0) {
    console.log("Found at index:", ind)
} else {
    console.log(x, "isn't present in the array")
}