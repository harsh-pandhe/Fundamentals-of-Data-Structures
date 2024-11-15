#include <stdio.h>
#include <stdlib.h>

int binary(int arr[], int key, int length)
{
    int start = 0;
    int end = length - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 11, 45, 67, 76, 111, 212, 5765, 12311};
    int key = 111;
    int length = sizeof(arr) / sizeof(arr[0]);
    int result = binary(arr, key, length);
    if (result == -1)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("Element found at Index: %d\n", result);
    }
    return 0;
}