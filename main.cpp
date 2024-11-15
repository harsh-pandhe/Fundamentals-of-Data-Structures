#include <iostream>
using namespace std;

int linear(int arr[], int key, int length)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key = 6;
    int length = sizeof(arr) / sizeof(arr[0]);
    int result = linear(arr, key, length);
    if (result == -1)
    {
        cout << "Element not found" << endl;
    }
    else
    {

        cout << "Element found at Index: " << result << endl;
    }
}