arr = [1, 11, 45, 67, 76, 111, 212, 5765, 12311]
key = 111

start = 0
end = len(arr) - 1

while start <= end:
    mid = start + (end - start) // 2
    if arr[mid] == key:
        print(f"Element found at index {mid}")
        break
    elif arr[mid] < key:
        start = mid + 1
    else:
        end = mid - 1
    if start > end:
        print("Element not found")
