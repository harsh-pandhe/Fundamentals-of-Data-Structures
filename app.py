arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
key = 6

for i in range(len(arr)):
    if arr[i] == key:
        print("Key found at index", i)
        break
    if i == len(arr) - 1:
        print("Key not found")
