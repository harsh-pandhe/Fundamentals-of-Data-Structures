#include <iostream>
using namespace std;

int shellSort(int arr[], int n)
{
    for (int gap = n / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < n; i += 1)
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
    int arr[] = {54, 12, 34, 56, 78, 90, 23, 45, 67, 89};
    int n = sizeof(arr) / sizeof(arr[0]);
    shellSort(arr, n);
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}