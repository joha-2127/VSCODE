#include <iostream>
using namespace std;
void selection_sort(int a[], int size);

int main()
{
    int arr[] = {7, 5, 4, 2};
    int size = 4;
    selection_sort(arr, size);
    cout << "The sorted array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
void selection_sort(int arr[], int size)
{
    for (int i = 0; i < (size - 1); i++)
    {
        int min_pos = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_pos])
            {
                min_pos = j;
            }
        }
        if (min_pos != i)
        {
            int temp = arr[i];
            arr[i] = arr[min_pos];
            arr[min_pos] = temp;
        }
    }
}