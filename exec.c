#include <stdio.h>
#include <stdlib.h>

void countSort(int inputArray[], int N)
{
    int M = 0;
    for (int i = 0; i < N; i++)
        if (inputArray[i] > M)
            M = inputArray[i];

    int *countArray = (int *)calloc(M + 1, sizeof(int));

    for (int i = 0; i < N; i++)
        countArray[inputArray[i]]++;

    for (int i = 1; i <= M; i++)
        countArray[i] += countArray[i - 1];

    int *outputArray = (int *)malloc(N * sizeof(int));
    for (int i = N - 1; i >= 0; i--)
    {
        outputArray[countArray[inputArray[i]] - 1] = inputArray[i];
        countArray[inputArray[i]]--;
    }

    for (int i = 0; i < N; i++)
        inputArray[i] = outputArray[i];

    free(countArray);
    free(outputArray);
}

int main()
{
    int inputArray[] = {4, 3, 12, 1, 5, 5, 3, 9};
    int N = sizeof(inputArray) / sizeof(inputArray[0]);

    countSort(inputArray, N);

    for (int i = 0; i < N; i++)
        printf("%d ", inputArray[i]);

    return 0;
}
