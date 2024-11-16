#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int bubble_sort(int arr[], int n)
{
    bool swapped;
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}

int main()
{
    int arr[] = {54, 12, 34, 56, 78, 90, 23, 45, 67, 89};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, n);
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}