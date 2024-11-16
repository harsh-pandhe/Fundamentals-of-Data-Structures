#include <iostream>
#include<cmath>
using namespace std;

int jump(int arr[], int key, int n)
{
    int step = sqrt(n);
    int prev = 0;
    while (arr[min(step, n) - 1] < key)
    {
        prev = step;
        step += sqrt(n);
        if (prev >= n)
        {
            return -1;
        }
    }

    while (arr[prev] < key)
    {
        prev++;
        if (prev == min(step, n))
        {
            return -1;
        }
    }

    if (arr[prev] == key)
    {
        return prev;
    }

    return -1;
}

int main()
{
    int arr[] = {1, 11, 45, 67, 76, 111, 212, 5765, 12311};
    int key = 212;
    int length = sizeof(arr) / sizeof(arr[0]);
    int result = jump(arr, key, length);
    if (result <= 0)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << "Element found at Index: " << result << endl;
    }
}