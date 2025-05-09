#include <iostream>
using namespace std;
void bubbleSort(int a[])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[5];
    int size;
    cout << "Enter the array elements:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(arr);
    cout << "The sorted array:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}