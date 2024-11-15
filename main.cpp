#include <iostream>
using namespace std;

int sentinel(int arr[], int key, int length)
{
    int last = arr[length - 1];
    arr[length - 1] = key;
    int i = 0;

    while (arr[i] != key)
    {
        i++;
    }

    if ((i < length - 1) || (arr[length - 1] == key))
    {
        return i;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 11, 45, 67, 76, 111, 212, 5765, 12311};
    int key = 212;
    int length = sizeof(arr) / sizeof(arr[0]);
    int result = sentinel(arr, key, length);
    if (result == -1)
    {
        cout << "Element not found" << endl;
    }
    else
    {

        cout << "Element found at Index: " << result << endl;
    }
}