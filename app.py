from math import sqrt

arr = [1, 11, 45, 67, 76, 111, 212, 5765, 12311]
n = len(arr)
x = 5765


def jump(arr, x, n):
    step = sqrt(n)
    prev = 0

    while arr[int(min(step, n) - 1)] < x:
        prev = step
        step += sqrt(n)
        if prev >= n:
            return -1

    while arr[int(prev)] < x:
        prev += 1
        if prev == min(step, n):
            return -1

    if arr[int(prev)] == x:
        return prev
    return -1


result = jump(arr, x, n)

if result <= 0:
    print("Not found")
else:
    print("Element found at:", int(result))
