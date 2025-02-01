#include <iostream>
using namespace std;

// sort the array in O(n) time without using extra variable
void sortingArrayBySwapping(int arr[], int size)
{
    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        if (arr[i] == 0)
        {
            i++;
        }
        else if (arr[j] == 1)
        {
            j--;
        }
        else
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}
void sortingArray(int arr[], int n)
{
    int countZero = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            countZero++;
        }
    }

    for (int i = 0; i < countZero; i++)
    {
        arr[i] = 0;
    }

    for (int i = countZero; i < n; i++)
    {
        arr[i] = 1;
    }
}
int main()
{
    int arr[] = {0, 1, 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1};
    // sort it in O(n)
    int size = sizeof(arr) / sizeof(arr[0]);
    //sortingArray(arr, 10);
    sortingArrayBySwapping(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}