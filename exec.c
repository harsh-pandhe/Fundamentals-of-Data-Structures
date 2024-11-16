#include <stdio.h>
#include <stdlib.h>

int selectionSort(int arr[], int n)
{
    int i, j, a;
    for (i = 0; i < n - 1; i++)
    {
        a = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[a])
            {
                a = j;
            }
        }

        int temp = arr[a];
        arr[a] = arr[i];
        arr[i] = temp;
    }
}
int main()
{
    int arr[] = {65, 3, 34, 23, 787, 21, 87, 98};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}