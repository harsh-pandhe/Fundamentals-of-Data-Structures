#include <iostream>
using namespace std;
void swap(int *a, int *b);
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low)-1;
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

int quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
    return 0;
}

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int arr[] = {54, 12, 34, 56, 78, 90, 23, 45, 67, 89};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, (n - 1));
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}