#include <iostream>
using namespace std;

int selectionSort(int arr[], int n)
{
    int i, j, temp, a;
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
        temp = arr[a];
        arr[a] = arr[i];
        arr[i] = temp;
    }
    return 0;
}

int main()
{
    int arr[] = {54, 12, 34, 56, 78, 90, 23, 45, 67, 89};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}