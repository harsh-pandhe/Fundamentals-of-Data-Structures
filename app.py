def count_sort(input_array):
    N = len(input_array)
    M = max(input_array)
    count_array = [0] * (M + 1)

    for num in input_array:
        count_array[num] += 1

    for i in range(1, M + 1):
        count_array[i] += count_array[i - 1]

    output_array = [0] * N

    for num in reversed(input_array):
        output_array[count_array[num] - 1] = num
        count_array[num] -= 1

    return output_array


input_array = [4, 3, 12, 1, 5, 5, 3, 9]
output_array = count_sort(input_array)

for num in output_array:
    print(num, end=" ")
