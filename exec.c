#include <stdio.h>
#include <stdlib.h>

int shellSort(int arr[], int n)
{
    for (int gap = n / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < n; i++)
        {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
            {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
    return 0;
}

int main()
{
    int arr[] = {65, 3, 34, 23, 787, 21, 87, 98};
    int n = sizeof(arr) / sizeof(arr[0]);
    shellSort(arr, n);
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}