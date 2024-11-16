#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int fibo(int arr[], int key, int n)
{
    int a = 0;
    int b = 1;
    int c = b + a;

    while (c < n)
    {
        b = a;
        a = c;
        c = b + a;
    }

    int offset = -1;

    while (c > 1)
    {
        int i = fmin(offset + b, n - 1);

        if (arr[i] < key)
        {
            c = a;
            a = b;
            b = c - a;
            offset = i;
        }

        else if (arr[i] > key)
        {
            c = b;
            a -= b;
            b = c - a;
        }
        else
        {
            return i;
        }
    }
    if (arr[n - 1] == key && a)
    {
        return n - 1;
    }

    return -1;
}

int main()
{
    int arr[] = {1, 11, 45, 67, 76, 111, 212, 5765, 12311};
    int key = 212;
    int length = sizeof(arr) / sizeof(arr[0]);
    int result = fibo(arr, key, length);
    if (result <= 0)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("Element found at Index: %d\n", result);
    }
    return 0;
}